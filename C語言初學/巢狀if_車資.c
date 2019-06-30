#include<stdio.h>
int main(){
	int diff,i,cost;
	printf("請輸入里程(單位為公尺):");
	scanf("%d",&i);
	if(i<=500)
		cost=70;
	else{
		diff=i-1500;
		if(diff%500==0)
			cost=70+(diff/500)*5;
		else
			cost=70+((diff/500)+1)*5;
		
	}
	printf("車資總共為:%d元\n",cost);
	system("pause");
	return 0; 
}
