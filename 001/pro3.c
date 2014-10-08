#include<stdio.h>
#include<math.h>
int main(){
	double r,thick,v,ir;
	scanf("%lf %lf",&r,&thick);
	ir = r - thick;
	v = ((pow(r,3)-pow(ir,3))*4*M_PI)/3;
	printf("%lf\n",v); 
	return 0;
}
