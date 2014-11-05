#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,i;
    char line[40];
    int *p;
    printf("データ数の入力:");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&num);
    p = (int*)malloc(sizeof(int)*num);
    printf("先頭アドレス=%p\n",p);
    *p = 10;
    printf("p=%d\n",*p);
    free(p);
    printf("p=%d\n",*p);
    return 0;
}