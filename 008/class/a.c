#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10
#define MAX 100
int hist[NUM+1]={0};

int coin(){
  return (rand()%2);
}

int trial(int n){
  int i,cnt=0;
  for(i=0;i<n;i++)cnt+=coin();
  return (n-cnt);
}
int main(){
  int i;
  srand((unsigned)time(NULL));
  for(i=0;i<MAX;i++){
    hist[trial((int)NUM)]++;
  }

  for(i=0;i<NUM+1;i++)printf("%d\n",hist[i]);
  return 0;
}
