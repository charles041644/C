#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float C,F;
	scanf("%f",&F);
	C = (F-32)*5/9;
	printf(" %f 轉換為攝氏溫度為 %.2f 度\n",F,C);
	system("pause");
	return 0; 
} 
