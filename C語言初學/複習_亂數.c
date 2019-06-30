#include<stdio.h>
#include<stdlib.h>
void main(){
	int num,i,j;
	scanf("%d",&num);
	srand(num);
	
	for(i=0;i<20;i++){
		for(j=0;j<5;j++){
			if(j<4){
				printf("%d",(rand)()%52-50);
			}else{
				printf("%d\n",(rand)()%52-50);
			}
		}
	}
}
