#include<stdio.h>
int  Recursive_Function (int a,int b){
	
	if(b==1)
	{
		return a;
	}
	else
	{
		return a+Recursive_Function(a,b-1);
	}
}
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d",Recursive_Function(a,b));
}
