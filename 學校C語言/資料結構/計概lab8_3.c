#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int account_number;  // �b��s��
    char firstname[50];  // �m
    char lastname[50];   // �W
    double balance;      // �b��l�B
}account;

typedef struct{
    int account_number;  
    char action_non[50];  
    char action_work[50];   
    double tra_money;      
}transaction;


//�i��ƭȭק� --�ǤJ�b��O�I�s��U���ק�� 
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
	FILE *cfPtr ,*traPtr ,*cfPtrWB;//�}�ɫ���
	account data[5];//�s�b���� 
	transaction tmp_trans;//�C������Ȧs
	int j,i;
	//�} account.txt �ɮ� 
	if((cfPtr=fopen("account.txt","r"))==NULL) 
		printf("file account.txt could not be opened\n");
	//�} transaction.txt�ɮ� 
	if((traPtr=fopen("transaction.txt","r"))==NULL ) 
		printf("file transaction.txt could not be opened\n");
	
	//�N���Ū�i�h���c�ܼƦ����� 
	for(i=0;i<5;i++){
		fscanf(cfPtr,"%d%s%s%lf",&data[i].account_number,&data[i].lastname,&data[i].firstname,&data[i].balance);
	}
	
	//�̧�Ū��trasaction.txt���C�@���r
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
