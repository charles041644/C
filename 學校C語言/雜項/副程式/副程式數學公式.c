#include <stdio.h>
#include <math.h>
void methodA(int x,int y,int z)
{
	float ans1,ans2;
	ans1=(-y+sqrt(y*y-4*x*z))/2*x;
	ans2=(-y-sqrt(y*y-4*x*z))/2*x;
	printf("%f and %f\n",ans1,ans2);

}
int main()
{
	int a,b,c;
	printf("enter 3 numnber:\n");
	scanf("%d%d%d",&a,&b,&c);
	methodA(a,b,c);
}
