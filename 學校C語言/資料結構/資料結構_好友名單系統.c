#include<stdio.h>
#include<stdlib.h>
typedef struct friend{
	char name[10];
	char phone[15];
	char birth[15];
}FRIEND;
void show (FRIEND [ ],int );
FRIEND enter(void);
int main (void){
	int now=0;
	char ch;
	FRIEND f[20];
	while(1){
		printf("請問您要 1)輸出好友名單 2)新增好友資料 0)離開:");
		scanf("%c",&ch);
		if(ch=='1'){
			if(now !=0)
				show(f,now);
			else
				printf("目前尚無資料\n");
		}else if (ch=='2'){
			if (now>=20)
				printf("名單已滿!\n");
			else{
				f[now]=enter( );
				now++;
			}
		}
		else if(ch=='0'){
			break;
			fflush(stdin);
		}
		system("pause");
		return 0; 
		
	}
}
void show(FRIEND f[ ],int size){
	int i;
	for(i=0;i<size;i++){
		printf("=====================================\n");
		printf("%10s 的電話: %-15s \n",f[i].name,f[i].phone);
		printf("%10s 的生日: %-15s \n",f[i].name,f[i].birth);
	}
	printf("====================================\n");
}
FRIEND enter(void){
	FRIEND new;
	printf("請輸入名稱");
	scanf("%s",new.name);
	printf("請輸入電話號碼");
	scanf("%s",new.phone);
	printf("請輸入生日");
	scanf("%s",new.birth);
	return new;
}  
