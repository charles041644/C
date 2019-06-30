#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  	char s1[21];
  	char s2[21];
	int m,n,i,j,k,a=0,b=0;
	gets(s1);
  	gets(s2);
  	
  	printf("s1 = %s\n",s1);
  	printf("s2 = %s\n",s2);
	scanf("%d %d",&m,&n);
	
	if(s1==s2)
		printf("Yes\n");
	else
		printf("No\n");
	
		
	
	for(j=m;j<=n;j++){
		if(s1[j]==s2[j])
			a++;
	}
	if(a==m-n+1)		
		printf("Yes\n");
	else
		printf("No\n");	
	
	
			
	for(k=m;k<=n;k++){
		if(s1[k]==s2[k])
			b++;
	}
	
	if (b==n-m+1)
		printf("Yes\n");
	else
		printf("No\n");	
	return 0;
}

