#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char deal[10];//買入賣出
	char tool[20];//工具名稱
	int num;//數量
	double price;//價錢 
}Bill;

double colculate(Bill data[],int count){
	int i=0;
	double total=0;
	for(i=0;i<5;i++){
		if(strcmp(data[i].deal,"Sell")==0){
			total+=(data[i].price*data[i].num);
		}else
			total-=(data[i].price*data[i].num);
	}return total;
}
int main(){
	
	Bill bill[10];
	int i,count=0;
	FILE *cfPtr;
	
	cfPtr=fopen("note.txt","r");
	
	while(1){
		fscanf(cfPtr,"%s %s %d %lf",bill[count].deal,bill[count].tool,&bill[count].num,&bill[count].price);
		count+=1;
		if(feof(cfPtr)) break;
	}
	printf("%.2f\n",colculate(bill,count));
}

