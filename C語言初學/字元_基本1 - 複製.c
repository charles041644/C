#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
	char s1[]="Hello";
	char s2[10];
	printf("what's ur name");
	gets(s2);
	strncat(s1,s2,10);//�Ns1�Ms2�s���A��s2�� 10�Ӧr��
	printf("%s\n",s1);
	system("pause"); 
}
