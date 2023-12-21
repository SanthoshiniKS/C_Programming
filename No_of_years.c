#include <stdio.h>
#include<math.h>
int main()
{
  int totaldays;
  scanf("%d",&totaldays);
  int years=totaldays/365;
  int weeks=(totaldays%365)/7;
  int days=(totaldays%365)%7;
  printf("Number of Years: %d",years);
  printf("\nNumber of Weeks: %d",weeks);
  printf("\nNumber of Days: %d",days);
  return 0;
}


/*
Input:
900
Output:
Number of Years: 2
Number of Weeks: 24
Number of Days: 2
*/
