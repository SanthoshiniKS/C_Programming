#include <stdio.h>

int secondlargest(int arr[],int n)
{
    int max=0,smax=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max)
            smax=arr[i];
    }
    return smax;
}

int main()
{
    int n=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n==1){
        printf("There is only one element in the array: %d",arr[0]);
        return 0;
    }
    int a=secondlargest(arr,n);
    printf("Second Largest Element in the array: %d",a);
    return 0;
}

/*
Input:
Enter no. of elements:5
Enter elements of the array:10 2 4 66 39

Output:
Second Largest Element in the array: 39
*/