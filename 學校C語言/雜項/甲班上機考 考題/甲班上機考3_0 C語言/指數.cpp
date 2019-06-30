#include <stdio.h>

int power(int b,int e)
{
	if(e==1)
	{
		return b;
	}
	else
	{
		return b*power(b,e-1);
	}
}
int main()
{
	int b,e;
	scanf("%d",&b);
	scanf("%d",&e);
	printf("%d",power(b,e));
} 
