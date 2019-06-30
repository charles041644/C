#include<stdio.h>
#include"stdlib.h" 
int C(int,int); 
int main (void){
	int n,r;
	printf("計算組合數,請輸入n,e:");
	scanf("%d%d",&n,&r);
	printf("C(%d,%d)=%d",n,r,C(n,r));
	system("pause");
}
int C(int n,int r){
	if(n<r||r<0)
		return -1;//error
	if(n==r||r==0)
		return 1;
	return C(n-1,r)+C(n-1,r-1);
}
