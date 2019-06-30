#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	char s1[41];
	char s2[41];
	char s3[41];
	gets(s1);
	gets(s2);
	gets(s3);
	printf("s1 = %s\n",s1);
	char *ptr = strstr(s1,s2);
	printf("s2 = %s\n",s2);
	printf("s3 = %s\n",s3);
	strncpy(ptr,s3,strlen(s2));
	printf("%s\n",s1);
	
	
}
