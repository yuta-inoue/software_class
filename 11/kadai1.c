#include<stdio.h>
#include<stdlib.h>

void alloc1(int num){
  double *x, s=0.0;
  int i;
  char line[40];

  x = (double*)malloc(sizeof(double)*num);

  for(i=0; i<num; i++){
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf",(x+i) /* TODO 3*/);
  }

  for(i=0; i<num; i++){
    s += x[i];
  }
  s /= (double)num;
  printf("%f\n", s);

  free(x);
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
