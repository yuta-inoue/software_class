#include<stdio.h>
#include<string.h>
int counter(char *);
char trimmed_word[100];
void trimSpaceEnter(char *);

int main(){
    char word[] = "This is a pen.";
    int i = 0,j;
    char trimmed_word[100]="";
    for(j=0;j<sizeof(word);j++){
        char w = word[j];
        if(!(w ==' '||w=='\n'||w=='\t')){
            sprintf(trimmed_word,"%s%c",trimmed_word,w);
        }
    }
    i = counter(trimmed_word);
    printf("The number of character is %d\n",i);
    return 0;
}

int counter(char *word){
    int cnt=0;
    while(*word++){
        cnt++;
    }
    return cnt;
}