#include<stdio.h>
#include<stdlib.h>
int findMaxMin(int *arr,int n,int *max,int *min)
{
	int i,j,a,b;
	a=arr[0];
	b=arr[1];
	for(i=0;i<n;i++){
		if(a<arr[i]){
			a=arr[i];
		}
	}
	*max=a;
	b=arr[1];
	for(j=0;j<n;j++){
		if(b>arr[i]){
			b=arr[i];
		}
	}
	*min=b;
}
