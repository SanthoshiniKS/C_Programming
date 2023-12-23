#include <stdio.h>
int main()
{
    int n=0,temp=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(int i=0;i<n;i++)
    {
        temp=nums[i];
        if(nums[temp]==0 && i!=n-1)
        {
            printf("False");
            return 0;
        }
        i=i+nums[temp]-1;
        if(i==n-1){
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}


/*
Input:
Enter no. of elements: 5
Enter the array elements:2 3 1 1 4
Output:
True

Input:
Enter no. of elements: 4
Enter the array elements:1 2 1 0
Output:
True

Input:
Enter no. of elements: 4
Enter the array elements:1 2 5 0
Output:
False
*/
