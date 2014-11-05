#include<stdio.h>

int main(){
    int *pi[3];
    int *pv;
    int i1 = 10;
    int i2[4] = {11,12,13,14};
    int i3[4] = {15,16,17,18};
    
    pv = &i3[0];
    printf("pv=%p\n",pv);
    printf("pv=%p\n",(pv+1));
    printf("pv=%p\n",(pv+2));
    printf("pv=%p\n",++pv);
    printf("pv=%p\n",(pv+1));
    
    pi[0] = &i1;
    printf("i1=%p\n",&i1);
    printf("i2=%p\n",i2);
    printf("pi[0]=%p\n",pi[0]);
    printf("piの先=%d\ni1=%d\n",**pi,i1);
    return 0;
}