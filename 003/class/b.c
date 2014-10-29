#include<stdio.h>
#include<math.h>
int main(){
	double x[5] = {0.1,0.2,-0.4,0.1,-0.1};
	double varience=0,average=0,sum=0,sum_v=0;
	int i;
	for(i = 0;i<5;i++)sum+=x[i];
	average = sum/5;
	for(i=0;i<5;i++)sum_v+=pow(average-x[i],2);
	varience = sum_v/5;
	printf("平均: %lf\n分散 : %lf\n",average,varience);
	return 0;
}
