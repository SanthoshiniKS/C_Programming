#include <stdio.h>

int main()
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("num1=%d\nnum2=%d",a,b);
}

/* 
Output:
5
10
num1=5
num2=10
*/
