#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a,b,c;
	scanf("%d:%d:%d",&a,&b,&c);
	printf("%d %d %d",a,b,c);
	if(a>=12)
	{
		a=a-12;
		printf("hour=%2.0d");
	}
	
	return 0;
}
