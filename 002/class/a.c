#include<stdio.h>

double add(double x,double y);
double sub(double x,double y);
double mul(double x,double y);
double div(double x,double y);

int main(){
	double a,b,result;
    char buf[30];
	printf("Enter two numbers\n");
	fgets(buf,sizeof(buf),stdin);
	sscanf(buf,"%lf %lf",&a,&b);
	printf("a = %f,b = %f\n",a,b);
	result = add(a,b);
	printf("a + b = %f\n",result);
    result = sub(a,b);
    printf("a - b = %f\n",result);
    result = mul(a,b);
    printf("a * b = %f\n",result);
    result = div(a,b);
    printf("a / b = %f\n",result);
    return 0;
}

double add(double x,double y){
    return x + y;
}

double sub(double x,double y){
    return x - y;
}

double mul(double x,double y){
    return x * y;
}

double div(double x,double y){
    return x / y;
}