#include<stdio.h>
#include<stdlib.h>
void vset(int,int);
void rset(int*,int);
int main(void){
	int x = 0,*p;
	p = &x;
	vset(x,1);
	printf("x=%d\n",x);
	rset(p,1);
	printf("x=%d\n",x);
	system("pause");
} 
void vset(int x,int y){
	x=y;
}
void rset(int *p,int y){
	*p=y; 
}
