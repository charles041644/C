#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	float input;
	printf("�z�n�ഫ1)����->�^�`2)����->�^��\n");
	scanf("%c",&ch);
	scanf("%f",&input);
	if(ch == '1')
		printf("%f ���� = %f �^�`\n",input,input*3.28);
	else if(ch =='2')
		printf("%f ���� = %f �^��\n",input,input*2.2);
	else
		printf("�S���o�ӿﶵ\n"); 
	system("pause");
	return 0; 
}
