#include<stdio.h>
#include<stdlib.h>
int inner_product(int *a,int *b,int n){
int i,ans=0;
for(i=0;i<n;i++){
	ans=ans+*(a+i) * *(b+i);
	}	
	return  ans;
}
