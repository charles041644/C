#include <stdio.h>
#include <stdlib.h>
int main(void){
	//char c[3]={"asa"}
	char c[100];
	int count=0,i,OK=1;
	scanf("%s",&c);
	for(i=0;i<100;i++)
	{
		if(c[i]=='\0')
			break;
		else
			count++;
		}
	for(i=0;i<count;i++)
	{
		if(c[i]!=c[count-1-i])
			OK=0;
	}			
	if(OK==1)
		printf("it is palindrome\n");
	else
		printf("it isn't palindrome\n");
} 
