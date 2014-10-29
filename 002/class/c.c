#include<stdio.h>

int main(){
    int N;
    double result=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        result += (double)1/(i*i);
    }
    printf("%lf\n",result);
    return 0;
}