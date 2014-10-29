#include<stdio.h>
#include<math.h>

double f(double x);

int main(){
	double x = 0.1;
	printf("尤度: %lf\n",f(x));
}

double f(double x){
	double varience = 0.045600;
	double ave = -0.020000;
	return (1/sqrt(2*M_PI*varience))*exp(-pow(x-ave,2)/(2*varience));
}
