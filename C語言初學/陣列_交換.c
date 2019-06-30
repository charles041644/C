#include <stdio.h>
#include<stdlib.h>
void func(int[ ]);
int main(void)
{
	int a[2]={3,6};
	printf("a[0]=%d a[1]=%d\n",a[0],a[1]);
	func(a);
	printf("a[0]=%d a[1]=%d\n",a[0],a[1]);
	system("pause");
 } 
void func(int a[ ]){
	int temp;
	temp =a[0];
	a[0]=a[1];
	a[1]=temp;
}
