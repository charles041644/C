#include<stdio.h>
#include<stdlib.h>
int main(){
	int month,date;
	char arr[31][10]={"一","二","三","四","五","六","七","八","九","十","十","十","十三","十四","十五","十六",
	"十七","十八","十九","二十","二十一","二十二","二十三","二十四","二十五","二十六","二十七","二十八",
	"二十九","三十","三十一" };
	while(scanf("%d/%d",&month,&date)!=EOF){
		printf("%s月%s日\n",arr[month-1],arr[date-1]);
	}
	return 0;
} 
