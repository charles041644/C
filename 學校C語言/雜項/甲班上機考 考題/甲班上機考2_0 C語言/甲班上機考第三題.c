#include<stdio.h>
#include<stdlib.h>
int main (){
	int i=0,sum=1,k;
	printf("enter a even numeber:\n");
	scanf("%d",&k);
	do{
	
		if(i<k-1){ 
			i+=2;
			sum*=i;
		}
		else
			break; 
	}while(i<k);
	printf("%d",sum);	
} 
