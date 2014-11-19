#include<stdio.h>
#include<stdlib.h>
int main(){
  int a = 10;
  double b= 123.45;
  char str[] = {"Test_String"};
  FILE *fp;
  if((fp=fopen("test.dat","w")) ==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }

  fprintf(fp,"%d %lf %s \n",a,b,str);
  fclose(fp);

  if((fp=fopen("test.dat","r")) ==NULL){
    printf("FILE OPEN ERROR\n");
    exit(1);
  }

  fscanf(fp,"%d %lf %s \n",&a,&b,str);
  printf("a=%d\n",a);
  printf("b=%lf\n",b);
  printf("str=%s\n",str);
  fclose(fp);
  return 0;
}
