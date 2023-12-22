#include <stdio.h>

int main()
{
    int c=0,n=0,a=0,i=0;
    printf("N = ");
    scanf("%d",&n);
    int arr[n];
    printf("Array = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=1,a=arr[0];
    for(i=1;i<n;i++)
    {
    	if(arr[i]==a)
      	    c++;
    	else{
          if(c>1){
                printf(", %d->%d",a,c);
         }
         a=arr[i];
         c=1;
      }
   }
   if(c>1)
      printf("%d->%d",a,c);
   return 0;
}


/*
N = 12
Array = 1 1 2 2 3 4 5 5 5 6 6 7
1->2, 2->2, 5->3, 6->2

N = 5
Array = 1 2 2 3 3
2->2, 3->2
*/
