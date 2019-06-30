#include<stdio.h>
#include<stdlib.h>
int main(void){
	char *p;
	int m=1;
	while((p=(char*)malloc(m*1024*sizeof(char))) !=NULL){
		if(p) m++;
		//free(p);
	}printf("可用記憶體 %d K \n",m);
	system("pause");
	return 0;
}
