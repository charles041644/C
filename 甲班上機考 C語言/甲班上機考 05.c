#include<stdio.h>

int main()
{
	int a;
	printf("please enter a number:");
	scanf ("%d",&a);
	if(a%2 ==0)
	{
		printf("為偶數\n",a);
	}

		
	if(a%5 ==0)
	{
		printf("為五的倍數\n",a);
	}

		
	if(a%10 ==0)
	{
		printf("為十的倍數\n",a);
	}
	
}
