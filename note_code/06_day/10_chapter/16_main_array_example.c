#include <stdio.h>
int main()
{
  // 需求:从数组中找某个数据,找到则输出对应位置的索引,找不到则输出-1,重复数据除外
  int nums[] = {10,20,30,40,5,50,60};
  int target = 500; // 要找的目标数据
  int len = sizeof(nums) / sizeof(int); // 计算长度
  int index = -1; // 假设这里存储就是要找到的目标数据的索引
  for (int i = 0; i < len;i++){
    if(target==nums[i]){
      index = i; // 存储找到的数据的索引
      break;
    }
  }
  if(index==-1){
    printf("没有找到,索引是:%d\n",index);
  }else{
    printf("找到了,索引是:%d\n",index);
  }

    return 0;
}