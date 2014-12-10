/*--
  課題２：多次元配列とポインタ
  --*/

#include <stdio.h>
#include <stdlib.h>

//  TODO: 関数 calculate の中で各行の和を表示

void calculate(int a[][4],int raw);

int main(void)
{
  //データ配列

  int a[][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
  };

  // TODO: 行の和を計算

  calculate(a,(int)(sizeof(a)/sizeof(a[0])));

  return 0;
}

void calculate(int a[][4],int raw){
  int i,j,cnt;
  for(i=0;i<raw;i++){
    cnt=0;
    for(j=0;j<4;j++){
      cnt+=a[i][j];
    }
    printf("%d\n",cnt);
  }
}
