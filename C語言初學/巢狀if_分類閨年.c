#include<stdio.h>
int main (){
	int year;
	scanf("%d",&year);
	if(year%4==0){
		if(year %100 == 0 && year % 400 != 0)
			printf("%d年為不閨年",year);
		else 
			printf("%d年為閨年",year);
		
	}
	else
		printf("%d年不為閨年",year);
	system("pause");
	return 0;
} 
