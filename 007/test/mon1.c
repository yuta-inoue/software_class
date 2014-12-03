#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_rand(int *data, int num);
void InsertionSort(int *data, int num);
void swap(int *p0, int *p1);

int main()
{
  int i;
  int num;
  int *data;
  clock_t start, end;

  char line[40];
  printf("number of elements (2 - 10000): "); /* 要素数を入力 */
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);
  if(num<2 || num>10000) return -1;

  data=(int*)malloc(sizeof(int)*num); /* int型配列を用意 */
  generate_rand(data,num); /* 乱数生成 */
  printf("*** Original Data ***\n"); /* 初期データの表示 */
  for(i=0; i<num; i++)
    printf("%d ",data[i]);
  printf("\n");

  start = clock();
  InsertionSort(data,num); /* 挿入ソートの実行 */
  end = clock();

  printf("*** Sorted Data ***\n"); /* ソート結果の表示 */
  for (i=0; i<num; i++)
    printf("%d ", data[i]);
  printf("\n");
  printf("ソート時間: %e秒\n", (double)(end - start)/CLOCKS_PER_SEC); /* ソート時間の表示 */
  free(data);
  return 0;
}

void generate_rand(int *data, int num)
{
  int i;
  srand(time(NULL));
  /* TODO1 (配列dataに乱数（0~9999）を格納) */
  for(i=0;i<num;i++) data[i] = rand() % 10000;
}

void swap(int *p0, int *p1)
{
  /* TODO2 (データの交換) */
  if(*p0<*p1){
    int temp = *p0;
    *p0 = *p1;
    *p1 = temp;
  }
}

void InsertionSort(int *data, int num)
{
  int i, j;
  for(i=1; i<num; i++){
    for(j=i; /* TODO3 (jの条件) */j>0 ; j--)
      swap(&data[j-1], &data[j]);
  }
}


