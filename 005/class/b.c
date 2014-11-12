#include<stdio.h>

#define STUDENT_NUMBER 4
#define SUBJECT_NUMBER 4

int draw_line(void);

struct result_struct {
    char name[32];
    int literature;
    int math;
    int english;
};

int main(){
    struct result_struct my_class[STUDENT_NUMBER] ={
        "Taro",80,80,55,
        "Jiro",75,90,70,
        "Saburo",50,45,30,
        "Siro",100,55,90,
    };
    int i,sum0=0,sum1[SUBJECT_NUMBER],sum2[STUDENT_NUMBER];
    
    for(i=0;i<SUBJECT_NUMBER;i++)sum1[i]=0;
    for(i=0;i<STUDENT_NUMBER;i++)sum2[i]=0;
    
    for(i=0;i<STUDENT_NUMBER;i++){
        sum1[0] += my_class[i].literature;
        sum1[1] += my_class[i].math;
        sum1[2] += my_class[i].english;
    }
    
    for(i=0;i<STUDENT_NUMBER;i++){
        sum2[i]=my_class[i].literature + my_class[i].math + my_class[i].english;
    }
    
    for(i=0;i<STUDENT_NUMBER;i++){
        sum0+=sum2[i];
    }
    
    printf("%12s %12s %12s %12s %12s\n","Name","Literature","Math","English","Sum");
    draw_line();
    for(i=0;i<STUDENT_NUMBER;i++){
        printf("%12s %12d %12d %12d %12d\n",my_class[i].name,my_class[i].literature,my_class[i].math,my_class[i].english,sum2[i]);
    }
    draw_line();
    printf("%12s %12.1f %12.1f %12.1f %12.1f\n","Average",(double)sum1[0]/STUDENT_NUMBER,(double)sum1[1]/STUDENT_NUMBER,(double)sum1[2]/STUDENT_NUMBER,(double)sum0/STUDENT_NUMBER);
    return 0;
}

int draw_line(){
    int i=0;
    for(i=0;i<65;i++)
        printf("-");
    
    printf("\n");
    return 0;
}