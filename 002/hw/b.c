#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void dayCalculation(int yea,int month,int day);

int main(void){
    int year,month,day;
    char line[256];
    int ret;
    
    printf("Enter any date (year month day):");
    fgets(line,sizeof(line),stdin);
    ret = sscanf(line,"%d %d %d",&year,&month,&day);
    if(ret!=3){
        printf("Incorrect data entered.\n");
        return 1;
    }
    
    if(year<=0 || month <= 0 || month > 12 || day <= 0 || day > 31){
        printf("Incorrect data entered.\n");
        return 1;
    }
    dayCalculation(year,month,day);
    return 0;
}

void dayCalculation(int y,int m,int d){
    char day[100];
    if(m == 1 || m == 2){
        m += 12;
        y--;
    }
    
    int Ya = floor((double)y / 100);
    int Yb = y % 100;
    int r = (int)(d + floor((double)26*(m+1)/10) + Yb + floor((double)Yb/4) + floor((double)Ya/4) + 5 * Ya) % 7;
    switch (r) {
        case 0:
         printf("Sat\n");
            break;
        case 1:
            printf("Sun\n");
            break;
        case 2:
            printf("Mon\n");
            break;
        case 3:
            printf("Tue\n");
            break;
        case 4:
            printf("Wed\n");
            break;
        case 5:
            printf("Thu\n");
            break;
        default:
            printf("Fri\n");
            break;
    }
}