#include<stdio.h>

int main(){
	double a[2][2],b[2],a_i[2][2];
	double *ptr;
	ptr=&a[0][0];
	printf("a11x+a12y = b1\na21x+a22y = b2\n");
	printf("a11:");
	scanf("%lf",ptr);
	printf("a12:");
	scanf("%lf",ptr+1);
	printf("a21:");
	scanf("%lf",ptr+2);
	printf("a22:");
	scanf("%lf",ptr+3);
	printf("b1:");
	scanf("%lf",&b[0]);
	printf("b2:");
	scanf("%lf",&b[1]);
	int i,j;
	double det = a[0][0]*a[1][1]-a[0][1]*a[1][0];
	a_i[0][0] = a[1][1]/det;
	a_i[0][1] = -a[0][1]/det;
	a_i[1][0] = -a[1][0]/det;
	a_i[1][1] = a[0][0]/det;
	double x,y;
	x = a_i[0][0]*b[0]+a_i[0][1]*b[1];
	y = a_i[1][0]*b[0]+a_i[1][1]*b[1];
	printf("x: %lf y: %lf\n",x,y);
	return 0;
}	
