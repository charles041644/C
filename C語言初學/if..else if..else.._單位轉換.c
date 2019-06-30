#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	float input;
	printf("您要轉換1)公尺->英呎2)公斤->英鎊\n");
	scanf("%c",&ch);
	scanf("%f",&input);
	if(ch == '1')
		printf("%f 公尺 = %f 英呎\n",input,input*3.28);
	else if(ch =='2')
		printf("%f 公斤 = %f 英鎊\n",input,input*2.2);
	else
		printf("沒有這個選項\n"); 
	system("pause");
	return 0; 
}
