#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int arr[10],k=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=48 && s[i]<=57){
          if(i<strlen(s)-1 && isdigit(s[i+1])){
              int a=(int)s[i]%48;
              arr[k]=a*10+(int)s[i+1]%48;
              i++;
              k++;
          }
          else{
           arr[k]=(int)s[i]%48;
           k++;
          }
        }
    }
    
    char alpha;
    k=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        {
            alpha=s[i];
            for(int j=0;j<arr[k];j++)
            {
                printf("%c",alpha);
            }
            k++;
        }
    }
    return 0;
}

/*
a5b23
aaaaabbbbbbbbbbbbbbbbbbbbbbb

a2b5c6d2
aabbbbbccccccdd
*/