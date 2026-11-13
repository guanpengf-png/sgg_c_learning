#include <stdio.h>
// （6）找某个数据在数组中是否存在,存在则返回索引,否则返回-1
// int search_index(int nums[7],int len,int target){

//    int index = -1; // 存储的就是要找的数据的索引,默认是找不到就是-1
//    for (int i = 0; i < len; i++)
//    {
//      if (target == nums[i])
//      {
//        index = i;
//        break;
//      }
//   }
//   return index;
// }

int search_index(int nums[7], int len, int target)
{
  for (int i = 0; i < len; i++) // 遍历数组
    if (target == nums[i]) // 对比数组中每个位置的数据和目标数据是否一致
      return i; // 说明找到了,则直接返回索引
  return -1; // 没有找到则返回-1
}

int main()
{
  int nums[] = {10, 20, 30, 40, 100, 50, 60};
  int len = sizeof(nums) / sizeof(int); // 计算长度
  int target = 100;                     // 要查找的目标数据
  int index = search_index(nums, len, target);
  printf("索引:%d\n", index);
  // 当调用函数的时候,数组名字作为实参传递,此时传递的是数组的第一个元素的内存地址,不要在函数内部使用sizeof计算数组的总字节数,此时计算的是内存地址所占的字节数是8个,所以,调用函数的时候要在函数外部计算数组长度一并传入到函数中

  // int nums[] = {10,20,30,40,100,50,60};
  // int target = 1000; // 要查找的目标数据
  // int len = sizeof(nums) / sizeof(int); // 计算长度
  // int index = -1; // 存储的就是要找的数据的索引,默认是找不到就是-1
  // for (int i = 0; i < len;i++){
  //   if(target==nums[i]){
  //     index = i;
  //     break;
  //   }
  // }
  // printf("索引是:%d\n",index);

  return 0;
}