#include<stdio.h>
#include<stdlib.h>
#define MAX_NUM 1000
typedef struct individual_data{
    char name[30];
    int age;
    double commute_time;
} Individual;

void draw_line();

int main(){
    int i,num=1000,sum=0;
    double sum1=0.0;
    Individual* ps;
    while(num>100){
        printf("入力するデータの人数を入力してください:");
        scanf("%d",&num);
    }
    ps = (Individual*)malloc(sizeof(Individual)*num);
    for(i=0;i<num;i++){
        char name[30];
        int age;
        double commutetime;
        printf("名前を入力してください:");
        scanf("%s",name);
        printf("年齢を入力してください:");
        scanf("%d",&age);
        printf("通学時間を入力して下さい:");
        scanf("%lf",&commutetime);
        sprintf((ps+i)->name,"%s",name);
        (ps+i)->age = age;
        (ps+i)->commute_time = commutetime;
    }
    for(i=0;i<num;i++){
        Individual p = *(ps+i);
        sum+=p.age;
        sum1+=p.commute_time;
    }
    printf("Members List\n");
    draw_line();
    printf("%12s %12s %12s\n","Name","Age","Time");
    for(i = 0;i<num;i++){
        Individual p = *(ps+i);
        printf("%12s %12d %12.2f\n",p.name,p.age,p.commute_time);
    }
    draw_line();
    printf("Average\n");
    draw_line();
    printf("%12s %12s\n","Age","Time");
    printf("%12.1lf %12.1lf\n",(double)sum/num,(double)sum1/num);
    return 0;
}

void draw_line(){
    int i=0;
    for(i=0;i<65;i++)
        printf("-");
    
    printf("\n");
}
