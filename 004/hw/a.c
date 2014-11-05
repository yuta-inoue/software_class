#include<stdio.h>

void search(int[],int*,int*,double*,int);
int max_n(int a,int b){return (a>b)?a:b;}
int min_n(int a,int b){return (a<b)?a:b;}
int main(){
    int data[5] = {2,5,6,34,44};
    int max,min,num;
    double ave;
    num = sizeof(data)/sizeof(data[0]);
    search(data,&min,&max,&ave,num);
    printf("max=%d,min=%d,ave=%lf\n",max,min,ave);
    return 0;
}

void search(int datasets[5],int* min,int* max,double* ave,int num){
    int temp_max,temp_min,sum,i;
    for(temp_max=-9999,temp_min=9999,sum=0,i = 0;i<num;i++){
        temp_max = max_n(temp_max,datasets[i]);
        temp_min = min_n(temp_min,datasets[i]);
        sum += datasets[i];
    }
    *max = temp_max;
    *min = temp_min;
    *ave = (double)sum/num;
}