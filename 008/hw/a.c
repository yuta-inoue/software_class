#include<stdio.h>
#define NUM 20

int partition(int a[],int n);

void sort(int a[],int n);
int main(){
  int i,data[NUM] = {20,62,17,38,76,92,59,11,93,88,79,50,89,67,75,26,83,22,13,48};
  sort(data,NUM);
  for(i=0;i<NUM;i++){
    printf("%d\n",data[i]);
  }
  return 0;
}

int partition(int a[],int n){
  int p,i,j=0,k=0;
  int temp_l[NUM],temp_s[NUM];
  p = a[0];
  for(i=0;i<n;i++){
    if(a[i]<p)temp_s[j++] = a[i];
    else if(a[i]>p)temp_l[k++] = a[i];
  }
  for(i=0;i<j;i++)a[i] = temp_s[i];
  a[j] = p;
  for(i=0;i<k;i++)a[j+i+1] = temp_l[i];
  return j;
}

void sort(int a[],int n){
  int c;
  if(n<=1)return;
  c = partition(a,n);
  sort(a,c);
  sort(a+c+1,n-c-1);
}

