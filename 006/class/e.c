#include<stdio.h>
#include<stdlib.h>
#define MAX 256
int main(){
  FILE *fpf,*fpt;
  char data[MAX];
  if((fpf=fopen("test.dat","r")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  if((fpt=fopen("test_copy.dat","w")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  while(fgets(data,MAX,fpf)!=NULL){
    fputs(data,fpt);
  }
  fclose(fpf);
  fclose(fpt);
  return 0;
}
