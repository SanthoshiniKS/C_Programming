#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include<ctype.h>
#define MAX_LENGTH 50

void minimum(char s[][50],int n);
void swap(char a[],char b[]);

void prefix(char s[][50],int n)
{
    char pre[MAX_LENGTH],last[MAX_LENGTH];
    minimum(s,n);
    int l=strlen(s[0]);
    strcpy(pre,s[0]);
    strcpy(last,s[n-1]);
    int i=0,c=0;
    while(c<l)
    {
        if(pre[i]==last[i]){
            c++;
        }
        else
           break;
    }
    if(c!=0){
        for(int k=0;k<c;k++)
            printf("%c",pre[k]);
    }
    else
      printf(" ");
}
void minimum(char s[][50],int n)
{
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(strcmp(s[j],s[j+1])>0) {
                swap(s[j],s[j+1]);
            }
        }
    }
}
void swap(char a[],char b[]) {
    char temp[MAX_LENGTH];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

int main()
{
    int n=0;
    printf("Enter no. of strings:");
    scanf("%d",&n);
    char s1[n][50];
    for(int i=0;i<n;i++)
    {
        printf("Enter String %d: ",i+1);
        scanf("%s",&s1[i]);
    }
    prefix(s1,n);
    return 0;
}

/*
Input:
Enter no. of strings:3
Enter String 1: flow
Enter String 2: fly
Enter String 3: fl
Output:
fl

*/