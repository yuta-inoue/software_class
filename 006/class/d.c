#include<stdio.h>
#include<stdlib.h>
int main(){
  int i;
  double val;
  int n_val;
  double sum;
  double ave,var;
  FILE *fp;
  if((fp=fopen("test.dat","r")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  n_val=0;
  sum=0;
  while(fscanf(fp,"%lf \n",&val)!=EOF){
    sum +=val;
    n_val++;
  }
  ave = sum/n_val;
  fclose(fp);
  if((fp=fopen("test.dat","r")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  n_val=0;
  sum=0;
  while(fscanf(fp,"%lf \n",&val)!=EOF){
    sum +=(val-ave)*(val-ave);
    n_val++;
  }
  var = sum/n_val;
  fclose(fp);
  printf("ave : %lf \n",ave);
  printf("var : %lf \n",var);
  return 0;
}
