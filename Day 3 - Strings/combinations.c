#include <stdio.h>
#include <string.h>

char *letters[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generate(char *digits,int index,char *combi){
    if (index==strlen(digits)) {
        printf("%s,",combi);
        return;
    }
    char *dig=letters[digits[index] - '2'];
    for (int i=0;i<strlen(dig); i++) {
        combi[index]=dig[i];
        combi[index+1]='\0';
        generate(digits,index+1,combi);
    }
}
int main() {
    char digits[10];
    printf("Enter a string: ");
    gets(digits);
    for(int i=0;i<strlen(digits);i++)
    {
        if(digits[i]=='1' || digits[i]=='0' || digits[i]=='*' || digits[i]=='#'){
            printf("Enter numbers only from 2 to 9");
            return 0;
        }
    }
    char combination[10];
    generate(digits,0,combination);
    printf("\n");
    return 0;
}

/*
Input:
Enter a string: 29
Output:
aw,ax,ay,az,bw,bx,by,bz,cw,cx,cy,cz,
*/
