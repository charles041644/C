#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b,i;
	printf("a student's grade:");
	scanf("%d",&a);
	i=a/10;
	switch(i){ 
		case 10:
		case 9:
			printf("A"); 
			break;		
		case 8:
			printf("B"); 
			break;
		case 7 :
			printf("C"); 
			break;
		case 6 :
			printf("D");
		default:
			printf("F"); 
		} 
} 
