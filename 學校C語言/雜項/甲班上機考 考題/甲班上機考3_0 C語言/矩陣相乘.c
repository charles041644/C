#include <stdio.h>

int main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{1,2},{3,4}};
	int i,j,ans[2][2]={0};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ans[i][j]+=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("ans[%d][%d]=%d\n",i,j,ans[i][j]);
		}
	}
	
} 
