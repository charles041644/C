#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,StuScore[10],total=0;
	for(i=0;i<10;i++){
		printf("請輸入學生%d的成績:",i+1);
		scanf("%d",&StuScore[i]);
	}
	for(i=0;i<10;i++)
		total+=StuScore[i];
	printf("平均成績為:%f\n",(double)total/10);
	system("pause");
	
 } 
