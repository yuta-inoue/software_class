#include<stdio.h>
#include<stdlib.h>
int main(){
  int i;
  char *str[]={"10",
               "123.45",
               "Test_String"};
  char load_str[256];
  FILE *fp;
  if((fp=fopen("test.dat","w")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  for(i=0;i<3;i++){
    fputs(str[i],fp);
    fputs("\n",fp);
  }
  fclose(fp);
  if((fp=fopen("test.dat","r")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  for(i=0;i<3;i++){
    fgets(load_str,256,fp);
    printf("%d : %s",i,load_str);
  }

  fclose(fp);
  return 0;
}
