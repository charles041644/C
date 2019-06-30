#include<stdio.h>
#include<stdlib.h>
int main(){
	float money;
	scanf("%f",&money);
	if(money>10000)
		money=money*0.55;
	else if(money>5000)
		money=money*0.6;
	else if(money>2000)
		money=money*0.7;
	printf("¹ê»Ý¥I:%f\n",money);
	system("pause");
	return 0; 
}
