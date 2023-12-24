#include <stdio.h>

void findoccurence(int arr[],int n,int x,int occ[])
{
    occ[0]=-1;
    occ[1]=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x && occ[0]==-1)
           occ[0]=i;
        if(arr[i]!=x && arr[i-1]==x){
            occ[1]=i-1;
            break;
        }
    }
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
    int occ[2];
    findoccurence(arr,n,x,occ);
    for(int i=0;i<2;i++)
       printf("%d ",occ[i]);
    return 0;
}

/*
Input:
Enter no. of elements:5
Enter a number to find its first and last occurence:20
Enter elements of the array:1 13 20 20 43

Output:
2 3 
*/