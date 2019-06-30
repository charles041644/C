#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int line[3][3],i,j,ans=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("輸入行列式第%d行%d列的元素:",i+1,j+1);
			scanf("%d",&line[i][j]);
			
		} 
	for(i=0;i<3;i++){
		ans=ans+line[0][i]*line[1][(i+1)%3]*line[2][(i+2)%3];
			-line[0][(i+2)%3]*line[1][(i+1)%3]*line[2][i];
	}
	printf("Ans=%d\n",ans);
	system("pause");
	
 } 
