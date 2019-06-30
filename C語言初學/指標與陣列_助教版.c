#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,a[5]={0};
	scanf("%d %d %d %d %d",a,a+1,a+2,a+3,a+4);
	for(i=0;i<5;i++){
		printf("%p %d %p %d\n",&a[i],a[i],a+i,*(a+i));
	}
} 
