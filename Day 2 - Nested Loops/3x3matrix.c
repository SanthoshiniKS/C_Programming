#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("Enter Array Elements:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix Elements are:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/*
Input:
Enter Array Elements:1 2 3 4 5 6 7 8 9
Output:
The Matrix Elements are:
1 2 3 
4 5 6 
7 8 9 
*/