#include<stdio.h>
int main (){
	int a;
	printf("請輸入要判斷奇數或偶數?");
	scanf("%d",&a);
	a % 2 ? printf("a is odd"):printf("a is even");
	system("pause");
	return 0 ; 
}
