#include<stdio.h>
#include<stdlib.h>
int main (){
	int i,j=0,k=0;
	printf("plz enter a number to calculate even number:\n");
	scanf("%d",&i);
	
	while(k<i){
		k++;
		j+=2;
	} 
	
	printf("the %d even numbers is %d\n",k,j-2);
	system ("pause");
	return 0 ;
}
