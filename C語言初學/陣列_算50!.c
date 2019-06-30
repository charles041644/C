#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	short a[200];
	int m=0,k,i,carry=0;
	for(i=0;i<200;i++)
		a[i]=0;
	a[m]=1;
	for(k=2;k<=50;k++){
		for(i=0;i<=m;i++){
			a[i]=a[i]*k;
			a[i]=a[i]+carry;
			if(( carry= a[i] /10) != 0 && i==m)
				m++;
			a[i]=a[i]%10;
		}
	}
	printf("50! = ");
	for (i=m;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
	printf("pause");
}
