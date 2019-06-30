#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int account_number;//±b§·Ωs∏π
	char firstname[50];//©m 
	char lastname[50];//¶W
	double balance;//±b§·æl√B 
}account;

typedef struct{
	int account_number;//±b§·Ωs∏π
	char trans[10];
	char trans_act[5];
	double money;
}transaction;

void modify(transaction trans){
	FILE* ptr;
	int amount;
	int i;
	int pos=0;
	double tmp_money;
	double money;
	
	ptr=fopen("account.bin","rb");
	fread(&amount,sizeof(int),1,ptr);
	
	int account_number[amount];
	
	for(i=0;i<amount;i++){
		fread(&account_number[i],sizeof(int),1,ptr);
		if(account_number[i]==trans.account_number){
			fseek(ptr,sizeof(int)*(1+amount)+(sizeof(account)-sizeof(int)*pos),SEEK_SET);
			fseek(ptr,100,SEEK_CUR);
			if(strcmp(trans.trans_act,"in")==0){
				fread(&tmp_money,8,1,ptr);
				money = tmp_money+trans.money;
				fseek(ptr,-8,SEEK_CUR);
				fwrite(&money,8,1,ptr);
			}else if(strcmp(trans.trans_act,"out")==0){
				fread(&tmp_money,8,1,ptr);
				money = tmp_money-trans.money;
				fseek(ptr,-8,SEEK_CUR);
				fwrite(&money,8,1,ptr);
			}
			
		}
	}
}

int main(){
	FILE *ptr_trans;
	FILE* ptr_acc;
	int tmp_int;
	int i;
	transaction tmp_trans;
	account tmp_acc;
	
	ptr_trans = fopen("transation.txt","r");
	
	while(1){
		fscanf(ptr_trans,"%d%s%s%lf",&tmp_trans.account_number,&tmp_trans.trans,&tmp_trans.trans_act,&tmp_trans.money);
		modify(tmp_trans);
		if(feof(ptr_trans)) break;
	} 
}
