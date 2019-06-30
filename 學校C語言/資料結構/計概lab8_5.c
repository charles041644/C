#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int account_number;//±b§·Ωs∏π
	char firstname[50];//©m 
	char lastname[50];//¶W
	double balance;//±b§·æl√B 
}account;
int main(){
	FILE* ptr;
	account acc[5];
	//account tmp;
	int amount=5;
	int i=0;
	
	for(i=0;i<5;i++){
		scanf("%d %s %s %lf",&acc[i].account_number,acc[i].firstname,acc[i].lastname,&acc[i].balance);
	}
	
	ptr= fopen("account.bin","wb");
	
	fwrite(&amount, sizeof(int),1,ptr);
	
	for(i=0;i<5;i++){
		fwrite(&acc[i].account_number,sizeof(int),1,ptr);
	}
	for(i=0;i<5;i++){
			fwrite(&acc[i].firstname,50,1,ptr);
			fwrite(&acc[i].lastname,50,1,ptr);
			fwrite(&acc[i].balance,8,1,ptr);
	}
	fclose(ptr);
	
	return 0;
	
} 
