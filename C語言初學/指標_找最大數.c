#include<stdio.h>
#include<stdlib.h>
int *largest(int a[],int n){
	int *ptr;
	int i;
	ptr=&a[0];
	for(i=0;i<n;i++){
		if(*ptr<a[i]){
			ptr=&a[i];
		}
	}
	return ptr;
}
