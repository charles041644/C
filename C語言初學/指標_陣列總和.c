#include<stdio.h>
#include<stdlib.h>
int sumOfArray(int *arr,int n,int *ans)
{
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=*(arr+i);
	}
	*ans=sum;
}
