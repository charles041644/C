#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,a1,a2,a3,total;
	scanf("%d%d%d%d",&m,&a1,&a2,&a3);
	total=a1*199+a2*23+a3*85;
	if(total<=m)
		printf("剩下%d元\n",m-total);
	else
		printf("還差%d元",total-m); 
	system("pause");
	return 0; 
}
