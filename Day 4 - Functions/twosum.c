#include <stdio.h>
int sum(int arr[],int n,int x)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==x)
                  return 1;
        }
    }
    return 0;
}

int main()
{
    int n=0,x=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter sum:");
    scanf("%d",&x);
    int arr[n];
    printf("Enter elements of the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int a=sum(arr,n,x);
    if(a==1) 
       printf("Yes");
    else
       printf("No");
    return 0;
}

/*
Input:
Enter no. of elements:10
Enter sum:25
Enter elements of the array:1 23 2 4 50 3 21 4 4 0

Output:
Yes

Input:
Enter no. of elements:5
Enter sum:10
Enter elements of the array:1 2 6 2 10

Output:
No
*/
