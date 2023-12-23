#include <stdio.h>
#include<math.h>
int main()
{
    int n=0,temp=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n==1)
    {
        printf("%d",arr[0]);
        return 0;
    }
    int c=arr[0],maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(c<0)
           c=arr[i];
        else
           c+=arr[i];
        if(maxi<c)
            maxi=c;
    }
    printf("Maximum Sum = %d",maxi);
    return 0;
}

/*
Input:
Enter no. of elements: 5
Enter the array elements:2 4 1 -5 2
Output:
Maximum Sum = 7

Input:
Enter no. of elements: 1
Enter the array elements:2
Output:
Maximum Sum = 2
*/
