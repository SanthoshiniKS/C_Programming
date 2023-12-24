#include <stdio.h>
#include <stdlib.h>

int* duplicate(int arr[], int n);
int* union_arrays(int arr1[], int arr2[], int n1, int n2);

void sort(int arr[], int n)
{
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int* duplicate(int arr[], int n)
{
    int k=1;
    int* dupli=malloc(n*sizeof(int));
    dupli[0]=arr[0];
    for(int i = 1;i<n;i++){
        if (arr[i]!=arr[i-1]){
            dupli[k] = arr[i];
            k++;
        }
    }
    return dupli;
}

int* union_arrays(int arr1[],int arr2[],int n1,int n2)
{
    int n=n1+n2;
    int* uni=malloc(n*sizeof(int));
    int j=0;
    for (int i=0;i<n1;i++){
        uni[j]=arr1[i];
        j++;
    }
    for(int i=0;i<n2;i++){
        uni[j] = arr2[i];
        j++;
    }
    sort(uni, n);
    return uni;
}

int main()
{
    int n1, n2;
    printf("Enter no. of elements in array 1:");
    scanf("%d",&n1);
    int* arr1=malloc(n1*sizeof(int));
    printf("Enter the elements of array 1:");
    for (int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    printf("Enter no. of elements in array 2:");
    scanf("%d",&n2);
    int* arr2=malloc(n2*sizeof(int));
    printf("Enter the elements of array 2:");
    for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    int n=n1+n2;
    int* p=union_arrays(arr1,arr2,n1,n2);
    int* d=duplicate(p,n);
    printf("Union of Two arrays: ");
    for (int i=0;i<n;i++)
    {
        if (d[i]!=0)
            printf("%d ", d[i]);
    }
    free(arr1);
    free(arr2);
    free(p);
    free(d);
    return 0;
}


/*
Input:
Enter no. of elements in array 1:5
Enter the elements of array 1:2 3 4 5 6
Enter no. of elements in array 2:4
Enter the elements of array 2:1 2 4 5

Output:
Union of Two arrays: 1 2 3 4 5 6 
*/