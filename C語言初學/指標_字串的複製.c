#include<stdio.h>
#include<stdlib.h>
void Mystrcpy (char*,char*); 
int main(void){
	int result;
	char word1[ ]="I like C";
	char word2[ ]="This is fun";
	Mystrcpy(word1,word2);
	printf("word2 = %s \n",word2);
	system ("pause");
}
void Mystrcpy(char*str1,char*str2){
	int i;
	for(i=0;*str1+i!='\0';i++)
		*(str2+i)=*(str1+i);
	*(str2+i)='\0';
}


