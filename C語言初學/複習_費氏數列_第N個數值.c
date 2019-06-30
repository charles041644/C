#include <stdio.h>
#define for no_loop
//#define while no_loop
/*
int Fib(int N){
	int i;
  	int next=1,now=0,tmp;
  	while(--N){
    	tmp  = now + next;
    	now  = next;
    	next = tmp;
    }
	return now;
}
*/

int Fib(int n)
{
    int next=1,now=0,tmp;

    if(n==1) 
		return 0;
    else if(n==2)
		return 1;
    else{
        return ( Fib(n-1) + Fib(n-2) );
    }
}

int main(void) {
    int i;
    while(scanf("%d",&i)){
        printf("%d\n",Fib(i));
    }
    return 0;
}
