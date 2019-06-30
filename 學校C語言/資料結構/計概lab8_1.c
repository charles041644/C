#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int account_number;  // ±b§·Ωs∏π
    char firstname[50];  // ©m
    char lastname[50];   // ¶W
    double balance;      // ±b§·æl√B
}account;
int main(){
	FILE *fout;
	int i,j;
	account user[5],tmp;
	for(i=0;i<5;i++){
		scanf("%d %s %s %lf",&user[i].account_number,&user[i].firstname,&user[i].lastname,&user[i].balance);	
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(user[j].account_number > user[i].account_number){
					tmp= user[i];
					user[i]=user[j];
					user[j]=tmp;
			}
		}
	}
	for(i=0;i<5;i++){	
		printf("%d %s %s %.2lf\n",user[i].account_number,user[i].firstname,user[i].lastname,user[i].balance);
	}
	fout=fopen("account.txt","w");
	
	for(i=0;i<5;i++){
		fprintf(fout,"%d %s %s %.2lf\n",user[i].account_number,user[i].firstname,user[i].lastname,user[i].balance);	
	}
	fclose(fout);
	return 0;
}

