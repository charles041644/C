#include<stdio.h>
int main(){
	int diff,i,cost;
	printf("�п�J���{(��쬰����):");
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
	printf("�����`�@��:%d��\n",cost);
	system("pause");
	return 0; 
}
