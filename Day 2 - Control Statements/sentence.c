#include <stdio.h>
#include <string.h>

int main(){
    char sentence[100];
    int sl=0;
    printf("Sentence = ");
    gets(sentence);
    printf("Screen length = ");
    scanf("%d",&sl);
    if(strlen(sentence)>=screenlength)
    {
        printf("%s",sentence);
        return 0;
    }
    
    int add=screenlength-strlen(sentence);
    int sp=0;
    
    char s[]=strtok(sentence," ");
    
    return 0;
}

