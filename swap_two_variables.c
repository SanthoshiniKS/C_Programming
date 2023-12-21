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
Input:
5
10
Output:
num1=10
num2=5
*/
