#include<stdio.h>
#include<stdlib.h>
int main(){
	int mouth;
	printf("�п�J���:");
	scanf("%d",&mouth);
	if(mouth>=1&&mouth<=3)
		printf("%d�O�K��\n",mouth);
	else if(mouth<=6)
		printf("%d�O�L��\n",mouth);
	else if(mouth<=9)
		printf("%d�O�K��\n",mouth);
	else if(mouth<=12)
		printf("%d�O�V��\n",mouth);
	else
		printf("%d���X�k�����\n",mouth);
	system("pause");
	return 0; 
}
