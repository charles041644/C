#include<stdio.h>
#include<stdlib.h> 
int main (void){
	char rain;
	printf("���ѤU�B���v>50%��?\n");
	scanf("%c", &rain);
	if(rain =='y' || rain =='Y' )
		printf("�A�̦n�n�a��!\n");
	else 
		printf("�i�ण�|�U�B,�����a��\n");
	system("pause");
	return 0 ;
}
