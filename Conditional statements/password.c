#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char password[16];
    int low=0,up=0,sp=0,dig=0;
    printf("Enter password:");
    //scanf("%s",password);
    gets(password);
    if(strlen(password)>=8)
    {
        for(int i=0;i<strlen(password);i++)
        {
            if(password[i]!=' ')
            {
                if(islower(password[i]))
                    low+=1;
                else if(isupper(password[i]))
                    up+=1;
                else if(password[i]==33 || password[i]>=35 && password[i]<=38 || password[i]>=40 && password[i]<=43 || password[i]==45 || password[i]==64 || password[i]==94)
                {
                    sp+=1;
                }
                else if(isdigit(password[i]))
                    dig+=1;
            }
            else{
               printf("Blank spaces are not allowed in password");
               return 1;
            }
        }
        if(low>=1 && up>=1 && sp>=1 && dig>=1)
           printf("Strong Password!!!");
        else
           printf("\nPassword should contain\n-atleast 1 uppercase\n-atleast 1 lowercase\n-atleast 1 digit\n-atleast 1 special character");
    }
    else{
        printf("The length of the password should be atleast 8 characters");
    }
   
    return 0;
}

/*
Input:
Enter password:PassWord@12!^
Output:
Strong Password!!!


Input:
Enter password:Pass
Output:
The length of the password should be atleast 8 characters


Input:
Enter password:password
Output:
Password should contain
-atleast 1 uppercase
-atleast 1 lowercase
-atleast 1 digit
-atleast 1 special character

Input:
Enter password:pa sre2wjjr
Output:
Blank spaces are not allowed in password
*/

