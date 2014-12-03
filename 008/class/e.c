#include<stdio.h>
#define n 10

int main(){
  int i,mul=1;
  for(i=1;i<n;i++){
    mul*=i;
    printf("%d\n",mul);
  }
    return 0;
}
