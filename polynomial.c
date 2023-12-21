#include <stdio.h>
#include<math.h>
int main()
{
  int deg,x;
  int coeff[deg+1];
  printf("Enter the Degree: ");
  scanf("%d",&deg);
  printf("Enter the coefficients:");
  for(int i=0;i<=deg;i++){
      scanf("%d",&coeff[i]);
  }
  printf("Enter the value of x: ");
  scanf("%d",&x);
  int poly=coeff[deg],j=2,c=x;
  for(int i=deg-1;i>=0;i--)
  {
      poly=coeff[i]*c+poly;
      c=pow(x,j);
      j++;
  }
  printf("P(%d) = %d",x,poly);
  return 0;
}

/*
2x^3-x^2+3x+4
Output 1:
Enter the Degree: 3
Enter the Coefficients: 2 -1 3 4
Enter the value of x: 2
P(2) = 22

Output 2:
Enter the Degree: 3
Enter the coefficient:2 0 3 1
Enter the value of x: 2
P(2) = 23
*/
