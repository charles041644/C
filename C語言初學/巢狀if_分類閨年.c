#include<stdio.h>
int main (){
	int year;
	scanf("%d",&year);
	if(year%4==0){
		if(year %100 == 0 && year % 400 != 0)
			printf("%d�~�����Ӧ~",year);
		else 
			printf("%d�~���Ӧ~",year);
		
	}
	else
		printf("%d�~�����Ӧ~",year);
	system("pause");
	return 0;
} 
