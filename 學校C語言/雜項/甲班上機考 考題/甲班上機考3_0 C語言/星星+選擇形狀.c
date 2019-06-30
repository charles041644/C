#include <stdio.h>

int draw(int x,char s)
{
	int i,j,k;
	for(i = 1;i<=x;i++)
	{
		for(k = 1;k<x+1-i;k++)
		{
				printf(" ");			
		}
		for(j = 1;j<2*i;j++)
		{
			printf("%c",s);
			
		}
		printf("\n");
	}
	
}
int main (void)
{
	int x,s;
	printf("enter a number and a shape.\n");
	scanf("%d %c",&x,&s);
	draw(x,s);
	
	
}
