#include <stdio.h>
#if _WIN32
  #include <windows.h>
  #define SLEEP(s) Sleep(s*1000)
#elif __linux__
  #include <unistd.h>
  #define SLEEP(s) sleep(s)
#endif
int main()
{
  // printf("%d\n",_WIN32);


  SLEEP(3); // 暂停5秒
  printf("hello every\n");
  return 0;
}