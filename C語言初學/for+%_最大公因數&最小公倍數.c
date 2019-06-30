#include <stdio.h>
#include <stdlib.h>
int main (void){
	int a,b,i,M=0,m=0;
	printf("叫块ㄢタ俱计:");
	scanf(" %d%d",&a,&b);
	for(i=1;i<a&&i<b;i++){
		if (!(a%i) && !(b%i))
			M=i;//iMぇ程そ计 
	}
	printf(" %d & %d 程そ计 %d \n",a,b,M);
	i=a<b  ? a:b;
	while(1){
		if((i%a==0) && (i%b==0)){
			m=i;//imぇ程そ计 
			break;
		}
		i++;
	}
	printf("%d & %d ぇ程そ计 %d \n",a,b,m);
	system("pause");
	return 0;
}
