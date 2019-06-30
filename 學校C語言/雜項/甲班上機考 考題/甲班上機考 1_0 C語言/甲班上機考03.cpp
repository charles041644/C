#include<stdio.h>
int main ()
{
	float a;
	float b;
	printf("please enter sales:\n");
	scanf ("%f",&a);
	b=a;
	if (a <= 5000 && a >= 0 ){
		printf("nothing");
	}
	
	else if (a<=5001.0 && a>=10000.0){
		a=a*1.1;
	}
	else if (a<=10001.0&& a>=15000.0){
		a= a*1.15;
	}
	else{
		a=a*1.2;
	}
	b=a-b;
	 printf("\nsalas=%.2f",a);
	 printf("\n¼úª÷¬°:%.2f",b);
	 
	 
}
