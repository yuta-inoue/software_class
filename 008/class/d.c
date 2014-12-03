#include<stdio.h>
#define n 10
int func(int num){
  if(num==0)return 1;
  return num*func(num-1);
}

int main(){
  int i;
  for(i=1;i<n;i++)printf("%d\n",func(i));
  return 0;
}
