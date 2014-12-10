/*--
    課題３：線形探索
    --*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 5
int comp(const void *c1,const void *c2);
int search(int a[],int size,int val);
int main(void) 
{
  int i, val, res; //val: 探索値，res: 探索結果．配列中の位置
  char buf[100];
  int a[MAX_DATA];  //入力データ
  int size = sizeof(a)/sizeof(a[0]); //データの数

  //データの入力
  printf("<input data>\n");
  for(i=0; i< size; i++){
    printf("a[%d]: ", i);
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &a[i]);
  }

  //探索値の入力
  printf("search value:");
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &val);
  //値の探索および結果の表示 (TODO: 関数 search の作成)
  if((res = search(a, size, val))!= -1){
    printf("that value is a[%d]\n", res);
  } else {
    printf("not found\n");
  }
  return 0;
}

/*-- binary_searchを用いた要素の探索O(logn)
int comp(const void *c1,const void *c2){
  int temp1 = *(int *)c1;
  int temp2 = *(int *)c2;
  if(temp1<temp2)return -1;
  if(temp1==temp2)return 0;
  if(temp1>temp2)return 1;
}

int search(int a[],int size,int val){
  qsort(a,size,sizeof(int),comp);
  int low,high,mid;
  low = 0;
  high = size-1;
  while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==val){
      return mid;
    }
    if(a[mid]<val){
      low=mid+1;
    } else {
      high = mid-1;
    }
  }
  return -1;
}
*/
int search(int a[],int size,int val){
  int i;
  for(i=0;i<size;i++){
    if(a[i]==val){
      return i;
    }
  }
  return -1;
}
