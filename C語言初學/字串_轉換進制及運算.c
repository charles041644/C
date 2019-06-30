#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int number;
	int counta=0,countb=0;
	char stra[100],strb[100];
	while (scanf("%d",&number)!=EOF)
	{
		printf("%o 0x%X ",number,number);
		sprintf(stra,"%o",number);
		sprintf(strb,"%x",number);
		counta+=strlen(stra);
		countb+=strlen(strb);
		printf("%d %d\n",counta,countb);
	}
	return 0;
}
