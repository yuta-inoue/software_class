/*--------------------------------------------------------------
    課題：ポインタの配列
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

void print(int *args[],int n);

int main(void)
{
  int x=5, y=3, z=7;
//データ
  int *p[3];
//ポインタの配列

//ポインタの配列へアドレスを代入．

 p[0]=&x; p[1]=&y; p[2]=&z;
 printf("&x = %p  x = %d\n", &x, x);
 printf("&y = %p  y = %d\n", &y, y);
 printf("&z = %p  z = %d\n", &z, z);
 //ポインタの配列が指すアドレスと内容の表示

 print(p, 3);  //TODO: 関数printを作成

 return 0;
}

void print(int *args[],int n){
  int i;
  for(i=0;i<n;i++){
    printf("address = %p values = %d\n",args[i],*args[i]);
  }
}
