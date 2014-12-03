#include<stdio.h>
#define n 15
int fib(int num){
  if(num==0||num==1)return 1;
  return fib(num-1)+fib(num-2);
}

int main(){
  int i;
  for(i=0;i<n;i++)printf("%d\n",fib(i));
  return 0;
}
