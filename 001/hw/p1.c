#include<stdio.h>
int main(){
	int a1=0,a2=0,a3=0,i;
	for(i=0;i<3;){
		int n;
		printf("Q: Which do you like among cat, dog, and pig? Enter 1. cat 2. dog 3. pig\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				a1++;
				i++;
				break;
			case 2:
				a2++;
				i++;
				break;
			case 3:
				a3++;
				i++;
				break;
			default:
				printf("please input a correct answer\n");
				break;
		}
	}
	printf("1. cat : %.2lf\n2. dog : %.2lf\n3. pig : %.2lf\n",(double)a1/3,(double)a2/3,(double)a3/3);
	return 0;
}

