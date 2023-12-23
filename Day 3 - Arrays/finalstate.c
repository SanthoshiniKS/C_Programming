#include <stdio.h>

int main()
{
    int n=0,a=0,b=0,x=0,temp=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    x=n;
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
        if(i==0 && nums[i]==1) 
            i=i+nums[temp]-2;
        i=i+nums[temp]-1;
        if(i==n-1){
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}
