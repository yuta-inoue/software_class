#include<stdio.h>
#define MAX 100
#define n 10
typedef long long ll;
ll a[MAX];

void solve_for(){
  int an=0,i;
  a[0] = a[1] = 1;
  for(i=0;i<n-2;i++){
    a[i+2] = a[i]+a[i+1];
  }
}

void solve_recursion(){
}
int main(){
  solve_for();
  int i;
  for(i=0;i<n;i++){
    printf("%lld\n",a[i]);
  }
}
