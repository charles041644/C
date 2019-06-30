i 
#include<stdlib.h>
int Fibonacci (int n){
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*Fibonacci(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",Fibonacci(n));
}
