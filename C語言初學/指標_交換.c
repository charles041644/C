#include<stdio.h>
//����swap
int swap(int *a,int *b){
	int tmp;
	tmp= *a;
	*a=*b;
	*b=tmp;
}
int main(){
    
	//�ŧi��Ū�Ja b
    int a,b;
  	scanf("%d %d",&a,&b);
	//��Xa b����
	printf("%d %d \n",a,b);
    //OJTEST1
    
    //�I�sswap�ÿ�Xa b����
    swap(&a,&b);
    printf("%d %d \n",a,b);
	//OJTEST2
    return 0;
}

