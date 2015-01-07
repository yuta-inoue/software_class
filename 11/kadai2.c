#include<stdio.h>
#include<stdlib.h>

typedef struct list_struct{
  int data;
  struct list_struct *next;
}LIST;

LIST head;

void addlist(void);
void showlist(void);

int main(void){
  char command, buf[40];

  head.next = NULL;

  do{
    printf("comm? a:add p:print q:quit\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%c", &command);

    switch(command){
    case 'a':
      addlist();
      showlist();
      break;
    case 'p':
      showlist();
      break;
    case 'q':
      break;
    default:
      printf("error\n");
      break;
    }
  }while(command != 'q');

  return 0;
}

void addlist(void){
  LIST *p, *q, *newcell;
  int data;
  char buf[40];

  printf("data ? \n");
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &data);

  /* TODO 1 */

  newcell = /* TODO 2 */;
  if(newcell == NULL){
    printf("mem err\n");
    return;
  }

  /* TODO 3 */
}

void showlist(void){
  LIST *p;

  printf("\nlist \n");
  /* TODO 4 */
}
