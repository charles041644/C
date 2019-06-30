#include<stdio.h>
#include<stdlib.h>
int main(){
	int mouth;
	printf("請輸入月份:");
	scanf("%d",&mouth);
	if(mouth>=1&&mouth<=3)
		printf("%d是春天\n",mouth);
	else if(mouth<=6)
		printf("%d是夏天\n",mouth);
	else if(mouth<=9)
		printf("%d是春天\n",mouth);
	else if(mouth<=12)
		printf("%d是冬天\n",mouth);
	else
		printf("%d不合法的月份\n",mouth);
	system("pause");
	return 0; 
}
