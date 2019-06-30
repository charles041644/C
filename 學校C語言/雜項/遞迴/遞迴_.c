#include <stdio.h>

int Recursive_Function(int n)
{
	if(n<2)
	{
		return 1;
	}
	else
	{
		return  Recursive_Function(n-1)+Recursive_Function(n-2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Recursive_Function(n));
} 
