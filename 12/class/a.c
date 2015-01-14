#include<stdio.h>
#include<stdlib.h>
#include<direct.h>
int main(){
  FILE* fp;
  int i,j;
  for(i=0;i<3;i++){
    if(mkdir(i)){
      printf("Create Directory Error\n");
    }
    for(j=0;j<101;j++){
      if((fp=fopen("0/data"+i+"-"+j+".txt","w"))==NULL){
        printf("File Open Error\n");
        exit(1);
      }
      fclose(fp);
    }
  }
}
