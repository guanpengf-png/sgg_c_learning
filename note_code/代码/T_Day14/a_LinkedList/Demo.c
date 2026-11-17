#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 单向链表节点的结构体
typedef struct Node
{
    // 属性
    int element;       // 元素值(int)
    struct Node *next; // 下一个节点的地址
} Node;

// 单向链表的结构体
typedef struct
{
    // 属性
    Node *header; // 指向头节点的指针(first也可以)
    int length;   // 表示链表结构中节点数量[长度属性]
} LinkedList;

/**
 * @brief 初始化链表
 *
 * @param list 要被初始化的链表对象
 */
void initLinkedList(LinkedList *list);
/**
 * @brief 销毁链表
 *
 * @param list
 */
void destoryLinkedList(LinkedList *list);

/**
 * @brief Get the Previous Node object
 *
 * @param list
 * @param index 目标节点是链表中的第几"索引"节点
 * @return Node* 获取到的上一个节点的内存地址
 */
Node *getPreviousNode(LinkedList *list, int index);

/**
 * @brief 添加元素到链表的尾部
 *
 * @param list
 * @param element 要添加的元素值
 */
void addElement(LinkedList *list, int element);

/**
 * @brief 在指定位置插入元素
 *
 * @param list
 * @param index 指定位置
 * @param element
 */
void insertElement(LinkedList *list, int index, int element);

/**
 * @brief 删除链表尾部元素
 *
 * @param list
 * @param removeElement 接收被删除的元素值的指针
 * @return true
 * @return false
 */
bool deleteElement(LinkedList *list, int *removeElement);

/**
 * @brief
 *
 * @param list
 * @param index  要被删除的节点索引
 * @param removeElement
 * @return true
 * @return false
 */
bool deleteAtElement(LinkedList *list, int index, int *removeElement);

/**
 * @brief Set the Element object
 *
 * @param list
 * @param index 要被修改的节点索引
 * @param updateElement
 * @return true
 * @return false
 */
bool setElement(LinkedList *list, int index, int updateElement, int *updatedEle);

/**
 * @brief Get the Element object
 *
 * @param list
 * @param index 获取的节点
 * @return int 返回获取到的节点值
 */
int getElement(LinkedList *list, int index);

/**
 * @brief 打印链表元素
 *
 * @param list
 */
void printLinkedList(LinkedList *list);

int main()
{
    LinkedList list;

    // 初始化链表
    initLinkedList(&list);

    // 添加元素
    addElement(&list, 100);
    addElement(&list, 200);
    addElement(&list, 300);
    addElement(&list, 400);
    addElement(&list, 500);
    printf("链表长度 : %d\n", list.length);
    printLinkedList(&list);

    //插入元素
    insertElement(&list,2,700);
    printf("链表长度 : %d\n", list.length);
    printLinkedList(&list);

    //删除元素
    int removeElement;
    deleteElement(&list,&removeElement);
    printf("链表长度 : %d\n", list.length);
    printf("被删除的元素是 : %d\n",removeElement);
    printLinkedList(&list);

    //删除指定位置元素
    deleteAtElement(&list,2,&removeElement);
    printf("链表长度 : %d\n", list.length);
    printf("被删除的元素是 : %d\n",removeElement);
    printLinkedList(&list);

    //设置元素
    int updatedElement;
    setElement(&list,1,2000,&updatedElement);
    printf("被修改的元素是 : %d\n",updatedElement);
    printLinkedList(&list);

    //获取元素值
    printf("第一个元素 : %d \n",getElement(&list,0));
    printf("第二个元素 : %d \n",getElement(&list,1));
    printf("第三个元素 : %d \n",getElement(&list,2));
    printf("第四个元素 : %d \n",getElement(&list,3));

    //销毁
    destoryLinkedList(&list);
    return 0;
}

/**
 * @brief 初始化链表
 *
 * @param list 要被初始化的链表对象
 */
void initLinkedList(LinkedList *list)
{
    // 给链表对象的属性一一赋值 [初始值]
    list->header = NULL;
    list->length = 0;
}

/**
 * @brief 销毁链表
 *
 * @param list
 */
void destoryLinkedList(LinkedList *list)
{
    // 保存头节点地址
    Node *currentNode = list->header;

    // 循环获取节点
    while (currentNode != NULL)
    {
        // 说明有下一个节点
        // 先保存当前节点地址 [就是要销毁的地址]
        Node *destoryNode = currentNode;
        // 再把下一个节点地址给到currentNode
        currentNode = currentNode->next;
        // 最后释放destoryNode
        free(destoryNode);
    }

    // 把header置为NULL
    list->header = NULL;
    list->length = 0;
    list = NULL;
}

/**
 * @brief Get the Previous Node object
 *
 * @param list
 * @param index 目标节点是链表中的第几"索引"节点
 * @return Node* 获取到的上一个节点的内存地址
 */
Node *getPreviousNode(LinkedList *list, int index)
{
    // 索引保护
    if (index < 0 || index > list->length)
    {
        return NULL;
    }

    // 保存头节点地址
    Node *previousNode = list->header;

    for (size_t i = 0; i < index - 1; i++)
    {
        previousNode = previousNode->next;
    }

    return previousNode;
}

/**
 * @brief 添加元素到链表的尾部
 *
 * @param list
 * @param element 要添加的元素值
 */
void addElement(LinkedList *list, int element)
{
    insertElement(list, list->length, element);
}

/**
 * @brief 在指定位置插入元素
 *
 * @param list
 * @param index 指定位置
 * @param element
 */
void insertElement(LinkedList *list, int index, int element)
{
    // 做索引保护
    if (index < 0 || index > list->length)
    {
        return;
    }

    // 第一件事情 : 需要把Node准备好
    // 给Node对象开辟空间
    Node *newNode = (Node *)malloc(sizeof(Node));
    // 给Node对象的属性一一赋值
    newNode->element = element; // 元素值
    newNode->next = NULL;       // 新节点的下一个节点地址是不知道的

    // 第二件事情 : 把newNode放置到链表的指定位置
    if (index == 0)
    {
        // 插入到了第一个节点位置 -> 只需要操作header
        // 1.把原先第一个Node对象的内存地址接收到新节点的next位置
        newNode->next = list->header;
        // 2.把newNode的地址给到header
        list->header = newNode;
    }
    else
    {
        // 插入到非第一个节点位置 -> 需要获取到此位置的上一个节点地址
        Node *previousNode = getPreviousNode(list, index);

        // 1. 先把上一个节点的next存储的地址值给到新节点的next
        newNode->next = previousNode->next;
        // 2. 再把新节点自己的地址给到上一个节点的next
        previousNode->next = newNode;
    }

    // 链表长度+1
    list->length++;
}

/**
 * @brief 删除链表尾部元素
 *
 * @param list
 * @param removeElement 接收被删除的元素值的指针
 * @return true
 * @return false
 */
bool deleteElement(LinkedList *list, int *removeElement)
{
    return deleteAtElement(list, list->length - 1, removeElement);
}

/**
 * @brief
 *
 * @param list
 * @param index  要被删除的节点索引
 * @param removeElement
 * @return true
 * @return false
 */
bool deleteAtElement(LinkedList *list, int index, int *removeElement)
{
    // 索引保护
    if (index < 0 || index >= list->length)
    {
        return false;
    }

    // 准备一个节点对象来接收被删除的节点地址
    Node *delNode;

    // 第一步 : 对链表做重新排列,并把删除的节点地址给到 delNode
    // 判断被删除的节点是否是第一个节点
    if (index == 0)
    {
        // 说明删除的是第一个节点
        // 1. 把header指向的节点元素[第一个元素]的地址赋值给delnode
        delNode = list->header;
        // 2. 把header指向的节点元素[第一个元素]的next地址赋值给header
        list->header = list->header->next;
    }
    else
    {
        // 说明删除的不是第一个节点
        // 1. 把前一个节点找到
        Node *previousNode = getPreviousNode(list, index);
        // 2. 把上一个节点的next赋值给 delNode [被删除的元素地址]
        delNode = previousNode->next; // previousNode->next : 要删除的目标节点
        // 3. 把上一个节点的next赋值为 目标节点的下一个节点地址
        previousNode->next = previousNode->next->next;
    }

    // 操作delNode
    // 把被删除的元素值 存给调用者
    *removeElement = delNode->element;
    // 把delNode内部空间全部置为0
    delNode->element = 0;
    delNode->next = NULL;
    // 释放delNode空间
    free(delNode);
    // 长度--
    list->length--;
    return true;
}

/**
 * @brief Set the Element object
 *
 * @param list
 * @param index 要被修改的节点索引
 * @param updateElement 要修改的值
 * @param updatedEle 被修改的值存储的地址
 * @return true
 * @return false
 */
bool setElement(LinkedList *list, int index, int updateElement, int *updatedEle)
{
    // 索引保护
    if (index < 0 || index >= list->length)
    {
        return false;
    }

    // 判断是否是第一个节点元素
    if (index == 0)
    {
        // 把原来的值先存起来
        *updatedEle = list->header->element;
        // 把要设置的值设置到目标节点上
        list->header->element = updateElement;
    }
    else
    {
        // 不是第一个节点
        //  1. 把前一个节点找到
        Node *previousNode = getPreviousNode(list, index);
        // 2. 把目标节点的原 元素 赋值给*updatedEle
        *updatedEle = previousNode->next->element;
        // 3. 把要设置的值 设置到 目标节点中
        previousNode->next->element = updateElement;
    }

    return true;
}

/**
 * @brief Get the Element object
 *
 * @param list
 * @param index 获取的节点
 * @return int 返回获取到的节点值
 */
int getElement(LinkedList *list, int index)
{
    // 索引保护
    if (index < 0 || index >= list->length)
    {
        return 89757;
    }

    // 判断是否是第一个节点元素
    if (index == 0)
    {
        // 是第一个节点元素
        return list->header->element;
    }
    else
    {
        // 1. 把前一个节点找到
        Node *previousNode = getPreviousNode(list, index);
        // 2. 把前一个元素的next元素的element返回
        return previousNode->next->element;
    }
}

/**
 * @brief 打印链表元素
 *
 * @param list
 */
void printLinkedList(LinkedList *list)
{
    // 判断长度
    if (list->length == 0)
    {
        return;
    }

    // 保存头节点地址
    Node *currentNode = list->header;

    // 循环获取节点
    while (currentNode != NULL)
    {
        // 说明有下一个节点
        printf("%d ", currentNode->element);
        // 再把下一个节点地址给到currentNode
        currentNode = currentNode->next;
    }
    // 最后一个元素打印完毕换行
    printf("\n");
}