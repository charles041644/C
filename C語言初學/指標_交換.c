#include<stdio.h>
//完成swap
int swap(int *a,int *b){
	int tmp;
	tmp= *a;
	*a=*b;
	*b=tmp;
}
int main(){
    
	//宣告並讀入a b
    int a,b;
  	scanf("%d %d",&a,&b);
	//輸出a b的值
	printf("%d %d \n",a,b);
    //OJTEST1
    
    //呼叫swap並輸出a b的值
    swap(&a,&b);
    printf("%d %d \n",a,b);
	//OJTEST2
    return 0;
}

