#include < stdio.h >
#include < stdlib.h >
#include < string.h >
int main (void){
	char s[]="string is fun!";
	char key;
	printf(" the string is ,string is fun . which character?");
	scanf("%c",&key);
	if (strchr(s,key))
		printf("found %c in string! the address is %d. \n",key,strchr(s,key));
	else
		printf("can't find %c in string \n",key);
	system("pause"); 
}
