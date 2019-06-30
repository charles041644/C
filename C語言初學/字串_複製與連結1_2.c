#include <stdio.h>
#include <string.h>
int main() {
  	char s1[31];
  	char s2[31];
  	char s3[31];
	int i,j=6;
	gets(s1);
  	gets(s2);
  	printf("s1 = %s\n",s1);
  	printf("s2 = %s\n",s2);
	for(i=0;i<6;i++ ){
		s3[i]=s1[i];
	}
	printf("s3 = %s\n",s3);
	while(s2[j]!='\0'){
		s3[j]=s2[j];
		j++;
	} 
	printf("s3 = %s\n",s3);
	check(s1,s2,s3);
    return 0;
}

