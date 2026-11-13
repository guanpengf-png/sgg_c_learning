#include <stdio.h>
int main()
{
  int a;
  double d;
  char ch;
  int nums[3];
  char chs[3];
  printf("a = %d,d = %.2f,ch = %c \n", a, d, ch);
  int len1 = sizeof nums / sizeof nums[0];
  int len2 = sizeof chs / sizeof chs[0];
  for (int i = 0; i < len1; i++)
  {
    printf("nums[%d] = %d ", i, nums[i]);
  }
  printf("\n=========\n");
  for (int i = 0; i < len2; i++)
  {
    printf("chs[%d] = %c ", i, chs[i]);
  }
  return 0;
}
