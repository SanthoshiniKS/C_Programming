#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    int sl=0,i=0,total=0,extra=0,ad=0;
    printf("Sentence = ");
    gets(sentence);
    printf("Screen length = ");
    scanf("%d",&sl);
    int len=strlen(sentence),sp=0;
    for(i=0;i<len;i++)
    {
        if(sentence[i]==' ')
            sp++;
    }
    total=sl+sp-len;
    extra=total%sp;
    ad=total/sp;
    i=0;
    while(i<len)
    {
        if(sentence[i]==' '){
            int st=ad;
            if(extra>0)
            {
                st++;
                extra--;
            }
            int j=0;
            while(j<st)
            {
                printf("*");
                j++;
            }
        }
        else
            printf("%c",sentence[i]);
        i++;
    }
    return 0;
}

/*
Input:
Sentence = This is a C program
Screen length = 40
Output:
This*******is******a******C******program

Input:
Sentence = Hello World
Screen length = 11
Output:
Hello*World
*/
