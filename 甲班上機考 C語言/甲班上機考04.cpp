#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("please enter different numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(b>a && b>c)
	{
		if(a>c){
			printf("%d>%d>%d\n",b,a,c);
		}
		else if(c>a){
			printf("%d>%d>%d\n",b,c,a);		
		}
	}
	else if(a>b && a>c)
	{
		if(b>c){
			printf("%d>%d>%d\n",a,b,c);
		}
			
		else if(c>b){
			printf("%d>%d>%d\n",a,c,b);
		}
	}
	else if(c>b && c>a)
	{
		if(b>a){
			printf("%d>%d>%d\n",c,b,a);
		} 
		else if(a>b){
			printf("%d>%d>%d\n",c,a,b);
	}
	
	} 
	else
	{
		printf("nothing");
	}
	return 0;
}
