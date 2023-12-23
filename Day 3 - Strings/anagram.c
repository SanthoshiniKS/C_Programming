#include <stdio.h>
#include <stdbool.h>

void sort(char s1[]);
bool anagram(char s1[],char s2[])
{
    int len1=strlen(s1),len2=strlen(s2);
    if(len1!=len2)
       return false;
    sort(s1);
    sort(s2); 
    for(int i=0;i<len1;i++)
    {
        if(s1[i]!=s2[i])
            return false;
    }
    return true;
}
void sort(char s1[])
{
    for (int i=0;i<strlen(s1);i++) {
      for (int j=i+1;j<strlen(s1); j++) {
         if(s1[i]>s1[j]) {
            int temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
         }
      }
   }
}
int main()
{
    char s1[100],s2[100];
    printf("Enter String 1:");
    gets(s1);
    printf("Enter String 2:");
    gets(s2);
    bool a=anagram(s1,s2);
    if(a==true)
       printf("True");
    else
       printf("False");
    return 0;
}


/*
Input:
Enter String 1:meat
Enter String 2:team
Output:
True

Input:
Enter String 1:rat
Enter String 2:ray
False
*/