#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b;
	char oper;
	printf("清輸入+-*/之二元運算式:");
	scanf("%d %c %d",&a,&oper,&b);
	switch(oper)
	{
		case '+':
			printf("計算結果為%d\n",a+b);
			break;
		case '-':
			printf("計算結果為%d\n",a-b);
			break;
		case '*':
			printf("計算結果為%d\n",a*b);
			break;
		case '/':
			printf("計算結果為%d\n",a/b);
			break;
		default:
			printf("輸入四則運算格式有錯");

	}
	system("pause");
	return 0;
} 
