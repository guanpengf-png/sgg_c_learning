#include <stdio.h>
int main()
{
  // 嵌套分支语句:分支语句中还有其他的分支语句
  /*
    if语句中可以有if语句/if-else语句/if-else if相关语句/switch-case语句/三元表达式
    if-else语句中可以有if语句/if-else语句/if-else if相关语句/switch-case语句/三元表达式
    if-else if相关语句中可以有if语句/if-else语句/if-else if相关语句/switch-case语句/三元表达式
    switch-case语句语句中可以有if语句/if-else语句/if-else if相关语句/switch-case语句/三元表达式
    三元表达式中还可以有其他的三元表达式


  */

  // 输入油号（92或95）和油量，计算需要支付的金额。92号汽油每升4元，如果油量大于等于40升，每升3.5元；95号汽油每升5元，如果油量大于等于40升，每升4.5元。
  int oilN, oilL; // 油号和油量
  printf("请您输入油号和油量:\n");
  scanf("%d %d", &oilN, &oilL);
  double price = 0; // 价格
  switch (oilN)
  {
  case 92:
    price = 4;
    if (oilL >= 40)
      price = 3.5;
    break;
    // printf("%d号汽油需要支付%.2lf元\n", oilN, price * oilL);break;
  case 95:
    price = 5; // 价格
    if (oilL >= 40)
      price = 4.5;
    break;
    // printf("%d号汽油需要支付%.2lf元\n", oilN, price * oilL); break;
  default:
    printf("输入有误\n");
    break;
  }
  printf("%d号汽油需要支付%.2lf元\n", oilN, price * oilL);
  return 0;
}