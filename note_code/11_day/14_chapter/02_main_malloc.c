#include <stdio.h>
#include <stdlib.h>
int main()
{
  // 需求:通过手动分配内存,存储一个整数
  // malloc()函数,参数是字节数
  // malloc()函数,返回值是分配内存空间后的内存地址,是void*类型
  // malloc()函数分配内存空间后,里面的数据默认是垃圾值
  // malloc()分配内存后,使用之前应该判断是否为空指针(内存分配是否成功)
  // malloc()分配内存成功要转其他类型的指针,才可以正常使用
  // malloc()函数分配的内存使用后,要自己手动释放(使用的是free函数)
  // free()函数有且只有使用一次即可
  // freen()函数使用后,为了严谨,可以把指针重置为空指针
  // 向系统申请4个字节的内存存储空间,并返回该内存空间的内存地址,存储到void*类型的指针变量中
  void *ptr = malloc(4);

  // 判断内存申请是否成功
  if(ptr==NULL){
    printf("内存分配失败\n");
    return 0;
  }
  // 内存分配成功了
  int *ptr2 = (int *)ptr;
  printf("ptr指向的内存地址:%p\n",ptr); // void *类型的ptr指针指向的地址
  printf("ptr2指向的内存地址:%p\n",ptr2); // 强转后int*类型的ptr2指针指向的地址
  printf("存储的数据值是:%d\n", *ptr2); // 解引用后的数据值
  *ptr2 = 100; // 存储数据
  printf("存储的数据值是:%d\n",*ptr2); // 读取数据
  // 手动释放
  free(ptr2);
  ptr2 = NULL; // 重置为空指针
  printf("存储的数据值是:%d\n",*ptr2); // 读取数据

  return 0;
}