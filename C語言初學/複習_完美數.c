#include <stdio.h>
#include <stdlib.h>

int PerfectNumber(int a) {
    int tmp;
	int i=0;
  	int isBelong=0;
 	int jud=0;
  	for(i=1;i<a+1;i++){
        tmp=a;
    	if(tmp%i==0){
        	isBelong+=i;
        }
    }
  	jud=2*a;
  	if(isBelong==jud){
    	return 1;
    }else{
    	return 0;
    }
}

int main() {
  int N=0;
  int num=0;
  scanf("%d",&N);

  while(N){
    scanf("%d",&num);

    if(PerfectNumber(num)){
    	printf("Y");
    }else{
		printf("N");
    }
    N--;
  }
  return 0;
}
