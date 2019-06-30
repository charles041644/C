#include < stdio.h >
#include < stdlib.h >
#include < string.h >
int main (void){
	char s1[]="string is fun";
	char s2[]= "string is";
	strcpy(s1,s2);
	printf("%s\n",s1);
	system("pause"); 
}
