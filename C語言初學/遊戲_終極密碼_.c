#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(int,int,int);
int main(){
	int answer;
	int left=1,right=10000;
	srand(time(NULL));
	answer=rand() %10000;//���l�ơA���ͤ���1~10000�ü�
	while(1){
		int guess;
		printf("�ثe�d��%d~%d,�вq",left,right);
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
	printf("�z�q��F!\n");
	system("pause");
}  
