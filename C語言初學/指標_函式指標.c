#include<stdio.h>
#include<stdlib>
int add(int,int);
int main(void){
	int ans,(*p) (int x,int y);
	p=add;
	ans =(*p)(3,4);
	printf("%d \n",ans);
	system ("pause");
}
int add(int x,int y){
	return x+y;
}
