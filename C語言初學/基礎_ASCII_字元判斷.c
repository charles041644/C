#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch >= 'a' && ch <= 'z')
		printf("輸入字元為小寫字母\n");
	if(ch >= 'A' && ch <= 'Z')
		printf("輸入字元為大寫字母\n");
	if(ch >= '0' && ch <= '9')
		printf("輸入字元為阿拉伯數字\n");
	system("pause");
	return 0 ; 
}
