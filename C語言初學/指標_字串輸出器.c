#include<stdio.h>
#include<stdlib.h>
void Myputs (char*); 
int main(void){
	char *str="pointer is fun";
	Myputs(str);
	system ("pause");
	return 0;
}
void Myputs(char *s){
	while(*s!='\0'){
		printf("%c",*s);
		s++;
		printf("\n");
	}

}

