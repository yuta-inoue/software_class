#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void hantei(int a,int b);
int win,lose,draw;

int main(void){
    int my_hand,pc_hand;
    char buf[10];
    char word[10];
    char yn[10];
    
    win = lose = draw = 0;
    srand((unsigned)time(NULL));
    
    while(1){
        pc_hand = rand()%3;
        printf("..........................\n");
        printf("Paper-Rock-Scissors\n");
        printf("Your choice? <Rock: 0, Scissors: 1,Paper: 2>:");
        fgets(buf,sizeof(buf),stdin);
        sscanf(buf,"%d",&my_hand);
        
        hantei(my_hand,pc_hand);
        printf("My hand : %d,PC hand : %d",my_hand,pc_hand);
        printf("Win %d,Lose %d,Draw %d\n",win,lose,draw);
        
        printf("Continue?<Yes...y,No...n>:");
        fgets(buf,sizeof(buf),stdin);
        sscanf(buf,"%s",yn);
        if(strcmp(yn,"n")==0)break;
    }
    return 0;
}

void hantei(int m_h,int p_h){
    if(m_h < 0 || m_h > 2)return;
    if(m_h==p_h){
        draw++;
        return;
    }
    if(m_h==2){
        if(p_h==0)
            win++;
        else
            lose++;
        return;
    }
    if(m_h < p_h){
        lose++;
    } else {
        win++;
    }
    return;
}