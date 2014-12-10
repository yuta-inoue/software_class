#include<stdio.h>
#include<stdlib.h>

double func(int n);

int main(){
  int n;
  double ave;
  printf("number of input elements:");
  scanf("%d",&n);
  ave = func(n);
  printf("average of the elements : %lf\n",ave);
}

double func(int n){
  int i,sum,temp;
  sum=0;
  for(i=0;i<n;i++){
    scanf("%d",&temp);
    sum+=temp;
  }
  return (double)sum/n;
}
