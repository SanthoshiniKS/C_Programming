#include <stdio.h>
int first_index(int arr[],int n,int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x)
           return i;
    }
    return -1;
}

int second_index(int arr[],int n,int x)
{
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x)
           return i;
    }
    return -1;
}

int main()
{
    int n=0,x=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter a number to find its first and last occurence:");
    scanf("%d",&x);
    int arr[n];
    printf("Enter elements of the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d ",first_index(arr,n,x));
    printf("%d",second_index(arr,n,x));
    return 0;
}


/*
Input:
Enter no. of elements:5
Enter a number to find its first and last occurence:40
Enter elements of the array:25 34 40 40 40

Output:
2 4

Input:
Enter no. of elements:4
Enter a number to find its first and last occurence:23
Enter elements of the array:1 28 39 40
Output:
-1 -1
*/