#include<stdio.h>
#include<stdlib.h>
/*�a�x�ιq*/ 
#define TypeA1 2 /*�ιq100�ץH�U�A�C��2��*/
#define TypeA2 3 /*�ιq101�ץH�W�A300�ץH�U�A�C��3��*/
#define TypeA3 4 /*�ιq301�ץH�W�A�C��4��*/	 
/*�u�~�ιq*/ 
#define TypeB1 200 /*�C���O200��*/
#define TypeB2 2 /*�C��3��*/

/*��~�ιq*/ 
#define TypeC1 5 /*�ιq300�ץH�U�A�C��5��*/
#define TypeC2 6 /*301�ץH�W�A�C��6��*/
int main (void){
	int T;/*�ιq���O*/
	float Deg;/*�ιq�׼�*/ 
	float C;/*�u�~�ιq�������O*/
	float Fee;/*�q�O*/
	printf("1.�a�x�ιq\n");
	printf("2.�u�~�ιq\n");
	printf("3.��~�ιq\n");
	printf("�п�J�ιq���O(1-3)");
	scanf("%d",&T);
	
	if(T>=1 &&T<=3)
	{ 
		printf("�ιq�׼Ƭ�= ");
		scanf("%f",&Deg);
		switch(T){
			case 1:
				if(Deg<=100)
					Fee=Deg*TypeA1;
				else if(Deg<=100)
					Fee=(Deg-100)*TypeA2+100*TypeA1;
				else
					Fee=TypeA3*(Deg-300)+100*TypeA2+100*TypeA1;
				break;
			case 2:
				printf("�������O= ");
				scanf("%f",&C);
				Fee=C*TypeB1+Deg*TypeB2;
				break;
			case 3:
				 if(Deg<=300)
				 	Fee=Deg*TypeC1;
				else
					Fee=(Deg-300)*TypeC2+300*TypeC1;
				break;
			} 
		
		printf("�q�O�@��:%f\n",Fee);					
	}
	else{
		printf("���O���~!\n");
		}
	system("pause");
	return 0;
} 
