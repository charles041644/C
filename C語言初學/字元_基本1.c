#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
	char s1[]="Hello";
	char s2[10];
	printf("what's ur name");
	gets(s2);
	strncat(s1,s2,10);//將s1和s2連接，取s2的 10個字元
	printf("%s\n",s1);
	system("pause"); 
}
