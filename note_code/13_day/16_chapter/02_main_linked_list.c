#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 定义一个结点的结构体类型
typedef struct Node
{
  int data;          // 存储数据的
  struct Node *next; // 存储的是下一个结点的内存地址
} Node;
// 定义一个链表的结构体类型
typedef struct
{
  size_t length; // 长度(结点的个数)
  Node *header;  // 指针指向的第一个结点的内存地址
} LinkedList;
// 初始化链表的函数
void init_linked_list(LinkedList *list)
{
  list->length = 0;    // 初始化长度
  list->header = NULL; // 默认为空指针
}
// 释放链表的函数
void destroy_linked_list(LinkedList *list)
{
  Node *current_node = list->header; // 找第一个
  while (current_node != NULL)
  {
    Node *free_node = current_node;    // 把结点存储起来
    current_node = current_node->next; // 找到当前结点的下一个结点
    free(free_node);
  }
  list->header = NULL; // 重置为空指针
  list->length = 0;    // 重置长度为0
}
// 获取链表长度的函数
size_t get_length(LinkedList *list)
{
  return list->length;
}
// 根据链表和位置,查找当前位置的前一个结点
Node *find_prev_node(LinkedList *list, size_t index)
{
  Node *prev_node = list->header; // 获取第一个结点
  for (size_t i = 1; i < index; i++)
    prev_node = prev_node->next;
  return prev_node;
}
// 向指定位置插入数据的函数
void insert_at(LinkedList *list, size_t index, int element)
{
  // 判断位置是否超出范围
  if (index > list->length)
    return;
  // 创建一个新的结点
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->data = element; // 新的数据
  // 判断位置是否为0
  if (index == 0)
  {
    new_node->next = list->header; // 把第一个结点的地址存储到新结点的next指针中
    list->header = new_node;       // 把新结点的内存地址存储到链表的header指针中
  }
  else
  {
    // 获取当前位置的前一个结点
    Node *prev_node = find_prev_node(list, index);
    new_node->next = prev_node->next; // 当前位置的结点的内存地址存储到新结点的next指针中
    prev_node->next = new_node;       // 把新结点的内存地址存储到链前一个结点的next指针中
  }
  list->length++; // 更新长度
}
// 从尾部追加数据的函数
void insert_end(LinkedList *list, int element)
{
  insert_at(list, list->length, element);
}
// 从指定位置删除数据的函数
bool delete_at(LinkedList *list, size_t index, int *del_element)
{
  if (index >= list->length) // 判断位置是否超出范围
    return false;
  Node *del_node = NULL; // 设置要删除的结点默认为空指针
  if (index == 0)
  {
    del_node = list->header;           // 把要删除的第一个结点的内存地址存储起来
    list->header = list->header->next; // 重新设置链表的第一个结点的指向
  }
  else
  {
    Node *prev_node = find_prev_node(list, index); // 获取当前位置的前一个结点
    del_node = prev_node->next;                    // 把要删除的结点的内存地址存储起来
    prev_node->next = prev_node->next->next;       // 把当前位置的下一个结点的内存地址存储到前一个结点的next指针中
  }
  *del_element = del_node->data; // 把要删除的结点中的数据通过解引用的方式存储起来
  free(del_node);                // 释放要删除的结点
  del_node = NULL;               // 重置为空指针
  list->length--;                // 更新长度减1
  return true;
}
// 从尾部删除数据的函数
bool delete_end(LinkedList *list, int *del_element)
{
  return delete_at(list, list->length - 1, del_element);
}
// 修改指定位置的数据的函数
void edit_value(LinkedList *list, size_t index, int element)
{
  if (index >= list->length)
    return;
  if (index != 0)
  {
    Node *prev_node = find_prev_node(list, index); // 找当前位置前一个结点
    prev_node->next->data = element;               // 修改当前位置的结点的数据
    return;
  }
  list->header->data = element; // 修改第一个位置的结点的数据
}
// 查看指定位置的数据的函数
void get_value(LinkedList *list, size_t index, int *element)
{
  if (index >= list->length)
    return;
  if (index != 0)
  {
    Node *prev_node = find_prev_node(list, index); // 找当前位置前一个结点
    *element = prev_node->next->data;              // 获取当前位置的结点的数据
    return;
  }
  *element = list->header->data; // 获取第一个位置的结点的数据
}
// 遍历链表的函数
void printf_linked_list(LinkedList *list)
{
  if (list->length == 0)
    return;
  Node *current_node = list->header;
  while (current_node != NULL)
  {
    printf("%d ", current_node->data);
    current_node = current_node->next;
  }
  printf("\n");
}
int main()
{
  LinkedList list; // 声明结构体变量
  // 初始化链表
  init_linked_list(&list);
  // 添加数据
  insert_at(&list, 0, 500);
  insert_at(&list, 0, 400);
  insert_at(&list, 0, 300);
  insert_at(&list, 0, 200);
  insert_at(&list, 0, 100);
  insert_end(&list, 600);                  // 追加数据
  printf("长度:%zu\n", get_length(&list)); // 长度
  printf_linked_list(&list);               // 遍历
  int del_element;
  delete_at(&list, 2, &del_element); // 删除数据
  printf("删除掉的数据是:%d\n", del_element);
  delete_end(&list, &del_element); // 尾部删除
  printf("删除掉的数据是:%d\n", del_element);
  printf("长度:%zu\n", get_length(&list)); // 长度
  printf_linked_list(&list);               // 遍历
  edit_value(&list, 2, 1000);              // 修改某个位置数据
  int element;
  get_value(&list, 2, &element); // 获取某个位置数据
  printf("数据是:%d\n", element);
  printf("长度:%zu\n", get_length(&list)); // 长度
  printf_linked_list(&list);               // 遍历
  destroy_linked_list(&list);              // 释放
  printf("长度:%zu\n", get_length(&list)); // 长度
  printf_linked_list(&list);               // 遍历

  return 0;
}