#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int account_number;  // 帳戶編號
    char firstname[50];  // 姓
    char lastname[50];   // 名
    double balance;      // 帳戶餘額
}account;

typedef struct{
    int account_number;  
    char action_non[50];  
    char action_work[50];   
    double tra_money;      
}transaction;


//進行數值修改 --傳入帳戶是呼叫當下的修改值 
void modify(account data[],transaction tmp_trans){
	int i=0;
	
	for(i=0;i<5;i++){
		if(tmp_trans.account_number == data[i].account_number){
			if(strcmp(tmp_trans.action_work,"in")==0){
				data[i].balance+=tmp_trans.tra_money;		
			}else
				data[i].balance-=tmp_trans.tra_money;
		}
	}
}
int main(){
	FILE *cfPtr ,*traPtr ,*cfPtrWB;//開檔指標
	account data[5];//存帳戶資料 
	transaction tmp_trans;//每筆交易暫存
	int j,i;
	//開 account.txt 檔案 
	if((cfPtr=fopen("account.txt","r"))==NULL) 
		printf("file account.txt could not be opened\n");
	//開 transaction.txt檔案 
	if((traPtr=fopen("transaction.txt","r"))==NULL ) 
		printf("file transaction.txt could not be opened\n");
	
	//將資料讀進去結構變數成員裡 
	for(i=0;i<5;i++){
		fscanf(cfPtr,"%d%s%s%lf",&data[i].account_number,&data[i].lastname,&data[i].firstname,&data[i].balance);
	}
	
	//依序讀取trasaction.txt的每一行文字
	while(1){
		fscanf(traPtr,"%d%s%s%lf",&tmp_trans.account_number,tmp_trans.action_non,tmp_trans.action_work,&tmp_trans.tra_money);	
		if(feof(traPtr)) break;
		modify(data,tmp_trans);
	} 
	account tmp;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(data[j].account_number > data[i].account_number){
					tmp= data[i];
					data[i]=data[j];
					data[j]=tmp;
			}
		}
	}
	fclose(cfPtr);
	fclose(traPtr);
	
	cfPtrWB=fopen("account.txt","w");
	
	for(i=0;i<5;i++){
		fprintf(cfPtrWB,"%d %s %s %.2lf\n",data[i].account_number,data[i].lastname,data[i].firstname,data[i].balance);
}
	fclose(cfPtrWB);
	return 0;
}
