#include<stdio.h>
#include<string.h>
int counter(char *);
int main(){
    char word[] = "This is a pen.";
    int i = 0;
    i = counter(word);
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