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
	int tmp_int;
	int i=0;
	
	
	ptr= fopen("account.bin","rb");
	
	fread(&tmp_int,sizeof(int),1,ptr);
	
	for(i=0;i<5;i++){
		fread(&acc[i].account_number,sizeof(int),1,ptr);
	}
	for(i=0;i<5;i++){
			fread(&acc[i].firstname,50,1,ptr);
			fread(&acc[i].lastname,50,1,ptr);
			fread(&acc[i].balance,8,1,ptr);
			printf("%d %s %s %.2lf\n",acc[i].account_number,acc[i].firstname,acc[i].lastname,acc[i].balance);
	}
	fclose(ptr);
	
	return;
	
} 
