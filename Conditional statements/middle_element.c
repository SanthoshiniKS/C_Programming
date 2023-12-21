#include <stdio.h>
int main()
{
    float x,y,z;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);
    printf("Enter the value of z: ");
    scanf("%f",&z);
    if(x==y || x==z || y==z)
        printf("All the values should be distinct");
    else if (y<x && x<z || z<x && x<y)
        printf("1");
    else if(x<y && y<z || z<y && y<x)
        printf("2");
    else if(x<z && z<y || y<z && z<x) 
        printf("3");
    return 0;
}

/*
Input:
Enter the value of x: 10
Enter the value of y: 4
Enter the value of z: 20

Output:
1
*/