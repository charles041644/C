#include<stdio.h>
#include<string.h>
void test(char s[],int bits){
	int i;
	int max=1;
	int min=-1;
	for(i=0;i<bits;i++){
		max*=2;
		min*=2;
	}
	printf("%sªº½d³ò¬O%d~%+d\n",s,min,max-1);
}
int main(){
	char type[10];
	while(scanf("%s",type)!= EOF){
		if(strcmp(type,"int")==0){
			test(type,31);
		}
		if(strcmp(type,"short")==0){
			test(type,15);
		}
		if(strcmp(type,"char")==0){
			test(type,7);
		}
		if(strcmp(type,"long")==0){
			test(type,31);
		}
	}
}
