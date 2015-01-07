#include<stdio.h>
#include<stdlib.h>

double func(int n);
int *elements;
int main(){
  int n;
  double ave;
  printf("number of input elements:");
  scanf("%d",&n);
  if(NULL==(elements=(int*)malloc(sizeof(int)*n))){
    printf("領域確保に失敗しました\n");
  }
  ave = func(n);
  printf("average of the elements : %lf\n",ave);
}

double func(int n){
  int i,sum,temp;
  sum=0;
  for(i=0;i<n;i++){
    scanf("%d",&(elements[i]));
  }
  for(i=0;i<n;i++){
    sum+=elements[i];
  }
  return (double)sum/n;
}
