#include<stdio.h>
//�Ч���fact
int fact(int *a){
	int ans=1;
	int i;
  	for(i=1;i<=*a;i++){
    	ans*=i;
    }
  	printf("%d",ans);
     
}
int main(void){
    //�Ыŧi�@�Ӿ��n��Ū�J�ƭ�
    int n;
  	scanf("%d",&n);
  	//�I�sfact�i��p��
    fact(&n);
  	//OJTEST
    return 0;
}

