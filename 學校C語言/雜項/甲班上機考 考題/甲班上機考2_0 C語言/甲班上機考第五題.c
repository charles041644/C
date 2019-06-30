#include<stdio.h>
#include<stdlib.h>
void methodA(){
	int i,a,j;
	printf("number");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("\n");
		for(j=0;j<=i;j++){
			printf("*");
		}	
	}
	//printf("\n");
}




int main (){	
	methodA();
}
