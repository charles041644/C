#include<stdio.h>

int main()
{
	int a;
	printf("please enter a number:");
	scanf ("%d",&a);
	if(a%2 ==0)
	{
		printf("案计\n",a);
	}

		
	if(a%5 ==0)
	{
		printf("き计\n",a);
	}

		
	if(a%10 ==0)
	{
		printf("计\n",a);
	}
	
}
