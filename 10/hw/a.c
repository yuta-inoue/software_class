#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student {
  char name[256];
  int score;
} student;

struct Student* high_score(struct Student *arg_test,int num){
  struct Student* p;
  int max_score=-9999;
  int i,n;
  for(i=0;i<num;i++){
    if(max_score < (arg_test+i)->score){
      max_score = (arg_test+i)->score;
      n = i;
    }
  }
  p = (arg_test+n);
  return p;
}

int main(void){
  int i;
  struct Student test[6] = {{"Aki",10},
                            {"Bob",20},
                            {"Eri",50},
                            {"Joy",80},
                            {"Sam",45},
                            {"Tom",90}};
  struct Student* top;
  top = high_score(test,6);
  printf("%s       %d\n",top->name,top->score);
  return 0;
}
