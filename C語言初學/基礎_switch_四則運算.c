#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b;
	char oper;
	printf("�M��J+-*/���G���B�⦡:");
	scanf("%d %c %d",&a,&oper,&b);
	switch(oper)
	{
		case '+':
			printf("�p�⵲�G��%d\n",a+b);
			break;
		case '-':
			printf("�p�⵲�G��%d\n",a-b);
			break;
		case '*':
			printf("�p�⵲�G��%d\n",a*b);
			break;
		case '/':
			printf("�p�⵲�G��%d\n",a/b);
			break;
		default:
			printf("��J�|�h�B��榡����");

	}
	system("pause");
	return 0;
} 
