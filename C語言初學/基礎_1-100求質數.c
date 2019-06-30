#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i;
	for(i=2;i<101;i++){
	int j,flag=1;
		for(j=2;j<i;j++){
		if(i%j==0) flag=0;
		}
		if(flag==1)
			printf("%2d ¬O½è¼Æ\t\t",i);
		}
	system("pause");
	return 0;
}
