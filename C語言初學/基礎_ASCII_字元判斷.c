#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch >= 'a' && ch <= 'z')
		printf("��J�r�����p�g�r��\n");
	if(ch >= 'A' && ch <= 'Z')
		printf("��J�r�����j�g�r��\n");
	if(ch >= '0' && ch <= '9')
		printf("��J�r�������ԧB�Ʀr\n");
	system("pause");
	return 0 ; 
}
