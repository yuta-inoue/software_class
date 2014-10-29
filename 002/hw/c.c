#include<stdio.h>
#include<math.h>
double y(double x);
double daikei(double xb,double xe,double yb,double ye);
int main(){
    int N;
    double xb,xe,yb,ye,sum=0;
    scanf("%d",&N);
    for(int i = 0;i<N;i++){
        xb = (double)2*i/N,xe = (double)2*(i+1)/N;
        yb = y(xb),ye=y(xe);
        sum += daikei(xb,xe,yb,ye);
    }
    printf("%lf\n",sum);
}

double y(double x){
    return x * (x-2)*(x-2);
}

double daikei(double xb,double xe, double yb, double ye){
    return (yb+ye)*(xe-xb)/2;
}