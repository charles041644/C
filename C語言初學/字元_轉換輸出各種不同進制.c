#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;
	char b[32];
	scanf("%x",&n);

	printf("+%u\n",n);
	printf("%u\n",n);
	printf("0x%X\n",n+14);
	printf("0x%x\n",n+10);

	
	int x,y,a[100];
	for (x=0;n>0;x++)
	{
		a[x]=n%2;
		n=n/2;
	}
	for(y=x-1;y>=0;y--)
	{
		printf("%d",a[y]);
	}
	return 0;
}
