#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void dump(unsigned char* address,int len){
    unsigned char *current;
    unsigned char *p;
    char word[100];
    printf("              : 00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f\n");
    printf("--------------:------------------------------------------------\n");
    current = (unsigned char*)((((long)address)/16)*16);
    while(current<(address+len)){
        printf("%p:",current);
        for(p = current;p<(current+16);p++){
            printf(" %02x",*p);
            if(*p>=0x20&&*p<=0x7e){
                sprintf(word,"%s%c",word,(unsigned char)*p);
            } else {
                sprintf(word,"%s%s",word,".");
            }
        }
        printf("|%s",word);
        printf("\n");
        memset(word,0,sizeof(word));
        current += 16;
    }
}

int main(){
    int s;
    char word[] = "Watashi ha ninzin ga kirai desu";
    char line[40];
    int *p[3];
    int i1 = 10;
    int i2[4] = {11,12,13,14};
    p[0] = &i1;
    p[1] = i2,p[2] = &(i2[1]);
    
    printf("&i1  :%p\n",&i1);
    printf("i2   :%p\n",i2);
    printf("i2[0]:%p\n",&i2[0]);
    printf("p[0] :%p\n",p[0]);
    printf("p[0] :%p\n",p[1]);
    printf("p[0] :%4o\n",*p[0]);
    printf("p[0] :%4o\n",*p[1]);
    printf("p[0] :%4o\n",*p[2]);
    printf("p[0] :%4o\n",*(p[2]+1));
    printf("p[0] :%4o\n",*p[0+1]);
    dump((unsigned char*)word,64);
    return 0;
}