#include<stdio.h>

int main(){
	char jusyoroku[][4][100]={{"山田","100-0001","東京都杉並区駒場1-1-1","0123-45-6789"},{"田中","100-0002","東京都新宿区新宿1-1-1","1234-56-7890"},{"安藤","123-4567","東京都武蔵野市吉祥寺1-1-1","2345-67-8901"}};
	int i;
	const int num = sizeof jusyoroku[1] / sizeof jusyoroku[1][0];
	for(i = 0;i<num;i++){
		puts(jusyoroku[1][i]);
	}
}
