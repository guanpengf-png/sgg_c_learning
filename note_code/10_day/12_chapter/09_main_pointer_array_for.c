#include <stdio.h>
int main()
{
  int nums[] = {10, 20, 30, 40, 50};
  int len = sizeof(nums) / sizeof(int); // 计算数组长度
  for (int i = 0; i < len; i++)
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
  printf("\n========================\n");
  // 声明了一个int*类型的指针变量,起名为ptr,指向的是数组中第一个元素的内存地址
  // int *ptr = &nums[0];
  int *ptr = nums;
  printf("ptr指针变量指向的内存地址:%p,对应的数据值:%d\n", ptr, *ptr);
  printf("第一个元素的内存地址:%p,对应的元素值:%d\n", &nums[0], nums[0]);
  printf("nums数组名指向的内存地址:%p,对应的数据值:%d\n", nums, *nums);
  // 结论:nums数组名中存储的内存地址就是第一个元素的内存地址,也可以解引用获取第一个元素值
  printf("\n========================\n");
  // *()----简写方式就是[]  []--------语法糖
  for (int i = 0; i < len; i++)
  {
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, nums[i], &nums[i]);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, i[nums], &i[nums]);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, ptr[i], &ptr[i]);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, i[ptr], &i[ptr]);
    printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *(ptr+i), ptr+i);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *(i+ptr), i+ptr);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *(i+nums), i+nums);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *(nums+i), nums+i);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *(&nums[0]+i), &nums[0]+i);
    // printf("索引:%d,元素值:%d,对应的内存地址:%p\n", i, *(i+&nums[0]), i+&nums[0]);
  }

  return 0;
}