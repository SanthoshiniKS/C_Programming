#include<stdio.h>
#include<math.h>
int main()
{
    int days,workers,hours;
    printf("Enter total no. of hours:");
    scanf("%d",&hours);
    printf("Enter total no. of days:");
    scanf("%d",&days);
    printf("Enter total no. of workers:");
    scanf("%d",&workers);
    float total_days=days-days*0.1;
    float total_hours=total_days*workers*8+total_days*workers*2;
    total_hours=(int)total_hours;
    if(total_hours>=hours) 
    {
        printf("Yes!%d hours left", (int)(total_hours-hours));
    } 
    else 
    {
        printf("Not enough time!%d hours needed",(int)(hours-total_hours));
    }
    return 0;
}


/*
Input:
Enter total no. of hours:350
Enter total no. of days:30
Enter total no. of workers:2
Output:
Yes!190 hours left

Input:
Enter total no. of hours:370
Enter total no. of days:20
Enter total no. of workers:2
Output:
Not enough time!10 hours needed
*/