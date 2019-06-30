#include <stdio.h>

int gcd(int x,int y)
{
	if(y==0)
	{
		return x;
	}
	else
	{
		return gcd(y,x%y);
	}
}
int main()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d",gcd(x,y));
} 
