#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,StuScore[10],total=0;
	for(i=0;i<10;i++){
		printf("�п�J�ǥ�%d�����Z:",i+1);
		scanf("%d",&StuScore[i]);
	}
	for(i=0;i<10;i++)
		total+=StuScore[i];
	printf("�������Z��:%f\n",(double)total/10);
	system("pause");
	
 } 
