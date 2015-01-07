#include<stdio.h>
#include</* TODO 1 */>

void alloc1(int num){
  double *x, s=0.0;
  int i;
  char line[40];

  x = /* TODO 2 */;
  
  for(i=0; i<num; i++){
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", /* TODO 3*/);
  }
  
  for(i=0; i<num; i++){
    s += x[i];
  }
  s /= (double)num;
  printf("%f\n", s);

  /* TODO 4 */;
}

int main(void){
  int num;
  char line[40];
  
  printf("num of data: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);  

  alloc1(num);

  return 0;
}
