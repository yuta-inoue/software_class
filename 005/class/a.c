#include<stdio.h>
typedef struct complex_struct {
    double real;
    double imaginary;
} COMPLEX;

COMPLEX add_complex(COMPLEX x,COMPLEX y){
    COMPLEX comp;
    comp.real = x.real + y.real;
    comp.imaginary = x.imaginary + y.imaginary;
    return comp;
}

COMPLEX mul_complex(COMPLEX x,COMPLEX y){
    COMPLEX comp;
    comp.real = x.real*y.real - x.imaginary*y.imaginary;
    comp.imaginary = x.real*y.imaginary + x.imaginary*y.real;
    return comp;
}

void disp_complex(COMPLEX x){
    if(x.imaginary < 0)
        printf("%lf - %lfi\n",x.real,-x.imaginary);
    else
        printf("%lf + %lfi\n",x.real,x.imaginary);
}

int main(){
    COMPLEX x,y,z;
    x.real = 2.0;
    x.imaginary = 5.0;
    y.real = 4.0;
    y.imaginary = 3.0;
    
    z = add_complex(x,y);
    disp_complex(z);
    z = mul_complex(x,y);
    disp_complex(z);
    return 0;
}