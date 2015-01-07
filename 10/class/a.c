#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student {
  char name[256];
  int score;
} student;

void sort(student st[],int left, int right){
  int pivot,l,r;
  char pivot_n[256];
  l = left;
  r = right;
  pivot = st[left].score;
  strcpy(pivot_n,st[left].name);
  while(left < right){
    while((st[right].score <= pivot)&& (left < right))
      right--;
    if(left!=right){
      strcpy(st[left].name,st[right].name);
      st[left].score = st[right].score;
      left++;
    }
    while((st[left].score >= pivot)&&(left < right))
      left++;
    if(left!=right){
      strcpy(st[right].name,st[right].name);
      st[right].score = st[left].score;
      right--;
    }
  }
  st[left].score = pivot;
  strcpy(st[left].name,pivot_n);
  pivot = left;
  left = l;
  right = r;
  if(left < pivot) sort(st,left,pivot-1);
  if(right > pivot) sort(st,pivot+1,right);
}

int main(void){
  int i;
  struct Student test[6] = {{"Aki",10},
                            {"Bob",20},
                            {"Eri",50},
                            {"Joy",80},
                            {"Sam",45},
                            {"Tom",90}};
  sort(test,0,5);
  for(i=0;i<6;i++){
    printf("%s %d\n",test[i].name,test[i].score);
  }
  return 0;
}
