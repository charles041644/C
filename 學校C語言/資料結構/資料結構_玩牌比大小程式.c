#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct card{
	int flower;/*0123 ����B�j���B���ߡB�³�*/
	int num;/*1~12 ���2�B3....13�BA */
} CARD;
int main(void){
	char *fl[ ]={"����","�j��","����","�®�"};
	int choice;
	CARD player,banker;
	srand(time(NULL));
	printf("�аݧA�Q�� 1)�j �٬O�� 2)�p ?");
	scanf("%d",&choice);
	do{
		printf("�o�P��...\n");
		player.flower =rand()%4;
		player.num =rand()%13;
		
		banker.flower =rand()%4;
		banker.num =rand()%13;
		if(player.num==12)
			printf("�z���쪺�P�O %s A \n",fl[player.flower]);
		else
			printf("�z���쪺�P�O %s %d \n",fl[player.flower],player.num+2);
		if(banker.num==12)
			printf("�q�����쪺�P�O %s A \n",fl[banker.flower]);
		else
			printf("�q�����쪺�P�O %s %d \n",fl[banker.flower],banker.num+2);
		if(choice ==1){
			if((player.num*10+player.flower)>(banker.num*10+banker.flower))
				printf("�zĹ�F!\n");
			else
				printf("�z��F\n");
		}
		else{
			if((player.num*10+player.flower)>(banker.num*10+banker.flower))
				printf("�z��F!\n");
			else
				printf("�zĹ�F\n");
		}
		printf("�A���@����? 1)�j �٬O�� 2)�p ?");
		scanf("%d",&choice);			
	}while(choice != 0);
	system("pause");
} 
