#include<stdio.h>
#define pi 3.14159

int main()
{
	float radius;
	float area;
	float primeter;
	printf ("please enter a number:\n"); 
	scanf("%f" , &radius);
	
	area = radius*radius*pi;
	printf("area=%.2f\n",area);
	
	primeter=radius*2*pi;
	printf("primeter=%.2f\n",primeter);
	
}


