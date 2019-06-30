#include<stdio.h>
#include<stdlib.h> 
int main (void){
	char rain;
	printf("今天下雨機率>50%嗎?\n");
	scanf("%c", &rain);
	if(rain =='y' || rain =='Y' )
		printf("你最好要帶傘!\n");
	else 
		printf("可能不會下雨,不必帶傘\n");
	system("pause");
	return 0 ;
}
