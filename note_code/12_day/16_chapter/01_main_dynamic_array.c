#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 定义一个动态数组的结构体类型
typedef struct
{
  int *data;       // 指针,指向的数组所需要的内存空间的内存地址
  size_t capacity; // 容量
  size_t length;   // 长度(实际数据的个数)
} DynamicArray;
// 初始化动态数组的函数
void init_dynamic_array(DynamicArray *array, size_t init_capacity)
{
  // 分配内存,设置指针指向该空间的内存地址
  array->data = (int *)malloc(sizeof(int) * init_capacity);
  array->capacity = init_capacity; // 存储容量
  array->length = 0;               // 初始化长度
}
// 扩容的函数
void resize_dynamic_array(DynamicArray *array, size_t new_capacity)
{
  // 扩容
  array->data = (int *)realloc(array->data, sizeof(int) * new_capacity);
  array->capacity = new_capacity; // 更新容量
}
// 释放内存的函数
void destroy_dynamic_array(DynamicArray *array)
{
  free(array->data);   // 释放
  array->data = NULL;  // 重置为空指针
  array->capacity = 0; // 重置容量为0
  array->length = 0;   // 重置长度为0
}
// 获取长度的函数
size_t get_length(DynamicArray *array)
{
  return array->length;
}
// 向指定索引位置插入数据的函数
void insert_at(DynamicArray *array, size_t index, int element)
{
  // 判断索引是否超出范围
  if (index > array->length)
    return;
  // 判断容量是否已经满了
  if (array->capacity == array->length)
    resize_dynamic_array(array, array->capacity * 2); // 扩容
  // 遍历的方式把数据向后移动
  for (size_t i = array->length; i > index; i--)
    array->data[i] = array->data[i - 1]; // 数据不停的向后移动
  array->data[index] = element;          // 把新的数据存储当前的索引位置
  array->length++;                       // 更新长度
}
// 向数组尾部追加一个数据的函数
void insert_end(DynamicArray *array, int element)
{
  insert_at(array, array->length, element);
}
// 从指定索引位置删除一个数据的函数
bool delete_at(DynamicArray *array, size_t index, int *del_element)
{
  // 判断索引是否超出范围
  if (index > array->length - 1)
    return false;
  // 先存储要删除的数据
  *del_element = array->data[index];
  // 遍历的方式进行移动
  for (size_t i = index; i < array->length - 1; i++)
    array->data[i] = array->data[i + 1]; // 向前移动
  array->length--;                       // 更新长度
  return true;
}
// 从数组尾部删除一个数据的函数
bool delete_end(DynamicArray *array, int *del_element)
{
  return delete_at(array, array->length - 1, del_element);
}
// 遍历数组的函数
void printf_dynamic_array(DynamicArray *array)
{
  if (array->length == 0)
    return;
  for (size_t i = 0; i < array->length; i++)
    printf("%d ", array->data[i]);
  printf("\n");
}
int main()
{
  // 声明动态数组变量
  DynamicArray array;
  // 初始化动态数组
  init_dynamic_array(&array, 5);
  // 插入数据
  insert_at(&array, 0, 600);
  insert_at(&array, 0, 500);
  insert_at(&array, 0, 400);
  insert_at(&array, 0, 300);
  insert_at(&array, 0, 200);
  insert_at(&array, 0, 100);
  printf("长度:%lld\n", get_length(&array)); // 长度
  printf_dynamic_array(&array);            // 遍历数组
  insert_end(&array, 700);                 // 尾追数据
  printf("长度:%lld\n", get_length(&array)); // 长度
  printf_dynamic_array(&array);            // 遍历数组
  int del_element;
  delete_at(&array, 3, &del_element); // 删除
  printf("删除的数据是:%d\n", del_element);
  printf("长度:%lld\n", get_length(&array)); // 长度
  printf_dynamic_array(&array);            // 遍历数组
  delete_end(&array, &del_element);        // 尾删
  printf("长度:%lld\n", get_length(&array)); // 长度
  printf_dynamic_array(&array);            // 遍历数组
  destroy_dynamic_array(&array);           // 释放
  printf("长度:%lld\n", get_length(&array)); // 长度
  printf_dynamic_array(&array);            // 遍历数组

  return 0;
}