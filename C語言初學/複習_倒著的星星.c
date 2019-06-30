#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void printTriangle(int x,char y);
int main (){
	int a;
	char b;
	scanf("%d %c",&a,&b);
	printTriangle(a,b);
	return 0;
}
void printTriangle(int x,char y){
	int i,j,k;
	for(i=x;i>0;i--)
	{
		for(k=0;k<x-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<((2*i)-1);j++)
		{ 
			printf("%c",y);
		} 
		printf("\n");
	}

	} 


