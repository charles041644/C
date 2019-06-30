#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(int,int,int);
int main(){
	int answer;
	int left=1,right=10000;
	srand(time(NULL));
	answer=rand() %10000;//取餘數，產生介於1~10000亂數
	while(1){
		int guess;
		printf("目前範圍%d~%d,請猜",left,right);
		scanf("%d",&guess);
		//if(guess>right||guess<left)
		//	exit(1);
		if(guess==answer)
			break;
		else{
			if(guess>answer)
				right=guess;
			else
				left=guess;
		}
	} 
	printf("您猜對了!\n");
	system("pause");
}  
