#include <stdio.h>

int main()
{
    int n=0,a=0,b=0,x=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    x=n;
    int digits[n+1];
    printf("Enter the large integer(As array): ");
    for(int i=0;i<n;i++)
        scanf("%d",&digits[i]);
    digits[n-1]=digits[n-1]+1;
    for(int i=n-1;i>0;i--)
    {
        if(digits[i]==10)
        {
            digits[i]=0;
            digits[i-1]=digits[i-1]+1;
            
        }
    }
    if(digits[0]==10)
    {
        for(int i=0;i<n;i++)
        {
            int temp=digits[i]%10;
            digits[i]=digits[i]/10;
        }
        digits[n]=0;
        x=n+1;
    }
    printf("Array after Sum:");
    for(int i=0;i<x;i++){
        printf("%d ",digits[i]);
    }
    return 0;
}


/*
Input:
Enter no. of elements: 4
Enter the large integer(As array): 1 0 2 4
Output:
Array after Sum:1 0 2 5 

Input:
Enter no. of elements: 5
Enter the large integer(As array): 9 9 9 9 9
Output:
Array after Sum:1 0 0 0 0 0 

*/