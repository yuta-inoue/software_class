#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp;
  if((fp=fopen("test.dat","w")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  fclose(fp);
  return 0;
}
