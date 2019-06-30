#include <stdio.h>
int main (){
	int N,Q;
	scanf("%d %d",&N,&Q);
	if(N%2==0){
		if(Q==1){
			printf("%d",N+199);
		}
		else if (Q==2){
			printf("%d",N+198);
		}
	}
		if(N%2==1){
		if(Q==1){
			printf("%d",N+198);
		}
		else if (Q==2){
			printf("%d",N+199);
		}
	}
} 
