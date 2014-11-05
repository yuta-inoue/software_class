#include<stdio.h>

void swap(int *x,int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int a,b;
    char line[40];
    printf("整数Aを入力:");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a);
    
    printf("整数Bを入力:");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&b);
    
    swap(&a,&b);
    printf("整数Aは%d\n",a);
    printf("整数Bは%d\n",b);
    return 0;
}