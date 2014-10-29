#include<stdio.h>

double add(double x,double y);
double sub(double x,double y);
double mul(double x,double y);
double div(double x,double y);

int main(){
    double a,b,result;
    char buf[30];
    int i;
    printf("1.add 2. sub 3.mul 4.div\n");
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf,"%d",&i);
    printf("Enter two numbers\n");
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf,"%lf %lf",&a,&b);
    printf("a = %f,b = %f\n",a,b);
    result = add(a,b);
    switch (i) {
        case 1:
            result = mul(a,b);
            printf("a + b = %f\n",result);
            break;
        case 2:
            result = mul(a,b);
            printf("a - b = %f\n",result);
            break;
        case 3:
            result = mul(a,b);
            printf("a - b = %f\n",result);
            break;
        default:
            result = mul(a,b);
            printf("a / b = %f\n",result);
            break;
    }
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