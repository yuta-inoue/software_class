#include<stdio.h>
#include<stdlib.h>

typedef struct list_struct{
  int data;
  struct list_struct *next;
}LIST;

LIST head;

void addlist(void);
void showlist(void);
void deletelist(void);
int main(void){
  char command, buf[40];

  head.next = NULL;

  do{
    printf("comm? a:add d:delete p:print q:quit\n");
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
    case 'd':
      deletelist();
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
  p = head.next;
  q=&head;
  while(1){
    if(p==NULL)break;
    if(data >= q->data && data <= p->data)break;
    q = p;
    p = q->next;
  }

  newcell = (LIST*)malloc(sizeof(LIST));/* TODO 2 */;
  if(newcell == NULL){
    printf("mem err\n");
    return;
  }

  /* TODO 3 */
  newcell->next = q->next;
  newcell->data = data;
  q->next = newcell;
}

void deletelist(){
  LIST *p,*q,*r;
  int data;
  char buf[40];

  printf("data ? \n");
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf,"%d",&data);

  p = head.next;
  q = &head;
  r = &head;
  while(1){
    if(p==NULL){
      printf("Sorry, there is no such data %d\n",data);
      return;
    }
    if(data==q->data)break;
    r = q;
    q = p;
    p = q->next;
  }
  q->next = NULL;
  r->next = p;
}

void showlist(void){
  LIST *p;

  printf("\nlist \n");
  /* TODO 4 */
  p = head.next;

  while(1){
    printf("%d\n",p->data);
    if(p->next==NULL)break;
    p = p->next;
  }
}
