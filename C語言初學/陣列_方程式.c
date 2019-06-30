#include <stdio.h>
#include<stdlib.h>
int S(int,int);
int main(void)
{
	int i,f[5],x,ans=0;
	for(i=0;i<5;i++){
		printf("請輸入方程式中%d次方項的係數",i);
		scanf("%d",&f[i]);
	}
	printf("請輸入欲計算的變數值");
	scanf("%d",&x);
	for(i=0;i<5;i++)
		ans+=S(x,i)*f[i];
	printf("f(%d)=%d\n",x,ans);
	system("pause");
 } 
int S(int x,int n){
	int i,tmp=x;
	if(n==0) return 1;

	for(i=1;i<n;i++)
		x*=tmp;
	return x;
}
