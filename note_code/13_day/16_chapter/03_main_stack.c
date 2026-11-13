#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 定义一个栈的结构体类型
typedef struct
{
  int *data;       // 指针
  size_t length;   // 长度
  size_t capacity; // 容量
} Stack;
// 定义初始化栈的函数
void init_stack(Stack *stack, size_t init_capacity)
{
  stack->data = (int *)malloc(sizeof(int) * init_capacity); // 分配空间并设置指针指向
  stack->length = 0;                                        // 初始化长度
  stack->capacity = init_capacity;                          // 初始化容量
}
// 扩容的函数
void resize_stack(Stack *stack, size_t new_capacity)
{
  stack->data = (int *)realloc(stack->data, sizeof(int) * new_capacity); // 重新设置指针指向
  stack->capacity = new_capacity;                                        // 更新容量
}
// 释放的函数
void destroy_stack(Stack *stack)
{
  free(stack->data);   // 释放
  stack->data = NULL;  // 重置为空指针
  stack->length = 0;   // 重置为0
  stack->capacity = 0; // 重置为0
}
// 获取长度的函数
size_t get_length(Stack *stack)
{
  return stack->length;
}
// 添加数据的函数_入栈(压栈/进栈)
void push_stack(Stack *stack, int element)
{
  if (stack->length == stack->capacity)       // 判断是否满了
    resize_stack(stack, stack->capacity * 2); // 扩容
  // *(stack->data + stack->length) = element;
  stack->data[stack->length] = element; // 添加数据
  stack->length++;                      // 更新长度
}
// 删除数据的函数_出栈(弹栈)
bool pop_stack(Stack *stack, int *del_element)
{
  if (stack->length == 0)
    return false;                                // 判断是否为空栈
  *del_element = stack->data[stack->length - 1]; // 把要删除的数据存储起来
  stack->length--;                               // 更新长度减1
  return true;
}
// 遍历数据的函数
void printf_stack(Stack *stack)
{
  if (stack->length == 0)
    return; // 没有数据
  for (size_t i = 0; i < stack->length; i++)
    printf("%d ", stack->data[i]);
  printf("\n");
}
int main()
{
  // 声明变量
  Stack s;
  init_stack(&s, 5);   // 初始化
  push_stack(&s, 100); // 入栈
  push_stack(&s, 200); // 入栈
  push_stack(&s, 300); // 入栈
  push_stack(&s, 400); // 入栈
  push_stack(&s, 500); // 入栈
  push_stack(&s, 600); // 入栈
  printf("长度:%zu\n", get_length(&s));
  printf_stack(&s); // 遍历
  int del_element;
  pop_stack(&s, &del_element); // 出栈
  printf("出栈的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&s));
  printf_stack(&s);            // 遍历
  pop_stack(&s, &del_element); // 出栈
  printf("出栈的数据:%d\n", del_element);
  printf("长度:%zu\n", get_length(&s));
  printf_stack(&s);  // 遍历
  destroy_stack(&s); // 释放
  printf("长度:%zu\n", get_length(&s));
  printf_stack(&s); // 遍历
  return 0;
}