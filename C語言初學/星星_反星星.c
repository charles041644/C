#include<stdio.h>
int main ()
{
	int a,i,j,k;
	printf("��J�Ʀr\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("\n");
		for(j=a;j>i;j--){
			printf(" ");
		}
				for(k=1;k<=i;k++){
				printf("*");
				}
	}
	printf("\n");

}

