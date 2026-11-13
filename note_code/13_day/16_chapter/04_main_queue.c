#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 定义队列的结构体类型
typedef struct
{
  int *data;       // 指针
  size_t length;   // 长度(实际数据个数)
  size_t capacity; // 容量
  size_t rear;     // 添加数据后的移动索引标识
  size_t front;    // 待删除数据的移动索引标识
} Queue;
// 初始化队列的函数
void init_queue(Queue *queue, size_t init_capacity)
{
  queue->data = (int *)malloc(sizeof(int) * init_capacity); // 分配空间设置指针指向
  queue->length = 0;                                        // 初始化长度
  queue->capacity = init_capacity;                          // 初始化容量
  queue->rear = 0;                                          // 初始化添加数据后的移动索引标识
  queue->front = 0;                                         // 初始化待删除数据的移动索引标识
}
// 释放队列的函数
void destroy_queue(Queue *queue)
{
  free(queue->data);   // 释放
  queue->data = NULL;  // 重置空指针
  queue->length = 0;   // 重置长度
  queue->capacity = 0; // 重置容量
  queue->rear = 0;     // 重置添加数据后的移动索引标识
  queue->front = 0;    // 重置待删除数据的移动索引标识
}
// 获取长度的函数
size_t get_length(Queue *queue)
{
  return queue->length;
}
// 入队的函数
void en_queue(Queue *queue, int element)
{
  if (queue->length == queue->capacity)
    return;
  queue->data[queue->rear] = element;
  queue->rear = (queue->rear + 1) % queue->capacity; //
  queue->length++;                                   // 更新长度
}
// 出队的函数
bool out_queue(Queue *queue, int *del_element)
{
  if (queue->length == 0)
    return false;
  *del_element = queue->data[queue->front];            // 把要删除的数据存储起来
  queue->front = (queue->front + 1) % queue->capacity; //
  queue->length--;
  return true;
}
// 遍历队列的函数
void printf_queue(Queue *queue)
{
  if (queue->length == 0)
    return;
  for (size_t i = 0; i < queue->length; i++)
  {
    size_t index = (queue->front + i) % queue->capacity;
    printf("%d ", queue->data[index]);
  }
  printf("\n");
}
int main()
{
  // 测试
  Queue q;
  init_queue(&q, 6); // 初始化
  en_queue(&q, 100); // 入队
  en_queue(&q, 200);
  en_queue(&q, 300);
  en_queue(&q, 400);
  en_queue(&q, 500);
  en_queue(&q, 600);
  en_queue(&q, 700);
  printf("长度:%zu\n", get_length(&q)); // 长度
  printf_queue(&q);
  int del_element;
  out_queue(&q, &del_element); // 出队
  printf("出队的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q)); // 长度
  printf_queue(&q);

  out_queue(&q, &del_element); // 出队
  printf("出队的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q)); // 长度
  printf_queue(&q);

  out_queue(&q, &del_element); // 出队
  printf("出队的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&q)); // 长度
  printf_queue(&q);

  en_queue(&q, 700);

  printf("长度:%zu\n", get_length(&q)); // 长度
  printf_queue(&q);

  // 释放
  destroy_queue(&q);

  printf("长度:%zu\n", get_length(&q)); // 长度
  printf_queue(&q);

  return 0;
}