#include <stdio.h>

int main() {
   char shape;
    int size;
    printf("Shape = ");
    scanf("%c",&shape);
    if(shape!='S' && shape!='C'){
        printf("Enter valid Characters\n\"S\" for Square\n\"C\" for Circle");
        return 0;
    }
    printf("Size = ");
    scanf("%d",&size);
    if(shape=='S')
       printf("Area of Square = %d",size*size);
    else if(shape=='C'){
        float a=3.14*size*size;
        printf("Area of Circle = %.2f",a);
    }
    return 0;
}

/*
Input:
Shape = S
Size = 3
Output:
Area of Square = 9

Input:
Shape = C
Size = 10
Output:
Area of Circle = 314.00
*/