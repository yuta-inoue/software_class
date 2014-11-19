#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct user {
  char name[30];
  char zip[30];
  char address[100];
  char phone[30];
} User;


int main(){
  int i,cnt;
  char ch;
  char name[30],zip[30],address[100],phone[30];
  char search_name[30];
  User users[256];
  FILE *fpi,*fpo;
  if((fpi=fopen("jusyo_input.dat","r"))==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  cnt = 0;
  while(fscanf(fpi,"%s %s %s %s",name,zip,address,phone)!=EOF){
    User user;
    sprintf(user.name,"%s",name);
    sprintf(user.zip,"%s",zip);
    sprintf(user.address,"%s",address);
    sprintf(user.phone,"%s",phone);
    users[cnt++]=user;
  }
  fclose(fpi);
  if((fpo=fopen("jusyo_output.dat","w"))==NULL){
    printf("FILE OPEN ERROR \n");
    exit(1);
  }
  input:
  printf("the name of the user:");
  scanf("%s",search_name);
  for(i=0;i<cnt;i++){
    if(strcmp(search_name,users[i].name)==0){
      fprintf(fpo,"%s %s %s %s\n",users[i].name,users[i].zip,users[i].address,users[i].phone);
      break;
    }
    if(i==cnt-1){
      printf("no user matched\nplease type again\n");
      goto input;
    }
  }
  fclose(fpo);
  return 0;
}
