#include<stdio.h>
int main ()
{
	int a,b,c;
	for(a=0;a<9;a+=2){
		
		for(b=a;b<9;b++){
			printf("*");

			if(b==8){
				printf("\n");	
				for(c=0;c<=a;c+=2){
					printf("0");
				}
			
			}
		}
	}
} 
