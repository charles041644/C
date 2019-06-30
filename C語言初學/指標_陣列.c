#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5];
	int i;
	int b;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(b=0;b<5;b++)
	{
		printf("%p %d %p %d",&a[b],a[b],a+b,*(a+b));	
	}
	return 0;
}
