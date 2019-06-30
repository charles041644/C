#include<stdio.h>
#include<stdlib.h>
void strReverse(char *arr){
int length=strlen(arr);
int i;
char tmp;
for(i=0;i<length/2;i++){
	tmp=arr[i];
	arr[i]=arr[length-i-1];
	arr[length-i-1]=tmp;
	}
}
