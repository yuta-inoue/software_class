#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#define SIZE_X 30
#define SIZE_Y 50
char field[SIZE_X][SIZE_Y],next_field[SIZE_X][SIZE_Y]; // 盤
int generation;
void init();
int count(int x,int y);
bool die_s(int x,int y);
bool generate_s(int x,int y);
void next_generation();
void copy_array();
void display();
int main(){
  generation = 0;
  init();
  while(1){
    display();
    next_generation();
    sleep(1);
    generation++;
  }
}

void init(){
  int i,j;
  for(i=0;i<SIZE_X;i++)
    for(j=0;j<SIZE_Y;j++)field[i][j] = '.';
  field[6][20] = field[6][21] = '*';
  field[7][19] = field[7][20] = '*';
  field[8][20] = '*';
}

void display(){
  int i,j;
  for(i=0;i<30;i++){
    printf("\n");
  }
  printf("Generation %d\n",generation);
  for(i=0;i<SIZE_X;i++){
    for(j=0;j<SIZE_Y;j++){
      printf("%c",field[i][j]);
    }
    printf("\n");
  }
}

void next_generation(){
  int i,j;
  for(i=0;i<SIZE_X;i++){
    for(j=0;j<SIZE_Y;j++){
      if(field[i][j]=='.'){
        if(generate_s(i,j))next_field[i][j]='*';
        else next_field[i][j]='.';
      } else {
        if(die_s(i,j))next_field[i][j]='.';
        else next_field[i][j]='*';
      }
    }
  }
  copy_array();
}

bool die_s(int x,int y){
  int cnt = count(x,y);
  return (cnt <= 1 || cnt >= 4);
}

bool generate_s(int x,int y){
    int cnt = count(x,y);
    return (cnt == 3);
}

int count(int x,int y){
  int i,j,nx,ny,cnt=0;
  for(i=-1;i<=1;i++){
    for(j=-1;j<=1;j++){
      nx = x + i,ny = y + j;
      if(nx >= 0 && nx < 50 && ny >= 0 && ny < 50 && field[nx][ny]=='*')cnt++;
    }
  }
  if(field[x][y]=='*')cnt--;
  return cnt;
}

void copy_array(){
  int i,j;
  for(i=0;i<SIZE_X;i++)
    for(j=0;j<SIZE_Y;j++)field[i][j]=next_field[i][j];
}
