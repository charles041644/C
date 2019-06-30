#include<stdio.h>
//請完成fact
int fact(int *a){
	int ans=1;
	int i;
  	for(i=1;i<=*a;i++){
    	ans*=i;
    }
  	printf("%d",ans);
     
}
int main(void){
    //請宣告一個整數n並讀入數值
    int n;
  	scanf("%d",&n);
  	//呼叫fact進行計算
    fact(&n);
  	//OJTEST
    return 0;
}

