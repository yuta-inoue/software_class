#include <stdio.h>
#include <math.h>

double f(double x, double y);
double fexa(double x);
double dif_print(double yi,double yexa);
int main(){
  int i = 0;
  double x = 0.0;
  double y = 15.0;
  double k1 = 0.0;
  double k2 = 0.0;
  double k3 = 0.0;
  double k4 = 0.0;
  double  h = 0.04;
  /* TODO (適宜変数を追加) */
  int IMAX = (int)(15.0/h);
  double k;
  double sum=0.0;
  double diff;
  double yexa;
  for (i=0; i<=IMAX; i++){
    if(i>0)x += h;
    k1 = h*f(x,y);
    /* TODO (ルンゲ・クッタ法による求解) */
    k2 = h*f(x+h/2.0,y+k1/2.0);
    k3 = h*f(x+h/2.0,y+k2/2.0);
    k4 = h*f(x+h,y+k3);
    k = 1.0/6.0*(k1+2.0*k2+3.0*k3+k4);
    if(i>0)y += k;
    yexa = fexa(x);
    sum += pow(y-yexa,2);
    if(i>0){
      diff = sqrt(sum / (double)i);
      //(1)の場合
      printf("i=%d\tx=%lf\ty=%e\tyexa=%e\t\n", i, x, y,yexa);
      //(2)の場合
      //printf("i=%d\tdif=%e\n",i,diff);
    } else {
      //(1)の場合
      printf("i=%d\tx=%lf\ty=%e\tyexa=%e\t\n", i, x, y,yexa);
    }
  }
  return 0;
}

double f(double X, double Y){
  double z;

  /* TODO (f=-xy の値を求める) */
  z = -X*Y;
  return z;
}

double fexa(double x){

  /* TODO (厳密解を求める) */
  double y;
  y = 15*exp(-0.5*pow(x,2));
  return y;
}
