#include <stdio.h>


int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2]={{1,2},{3,4},{5,6}};
	int c[2][2]={0};
	int i,j,n;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(n=0;n<3;n++)
			{
				c[i][j]+=a[i][n]*b[n][j];
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("(AB)[%d][%d]=%d\n",i,j,c[i][j]);
		}
	}
} 
