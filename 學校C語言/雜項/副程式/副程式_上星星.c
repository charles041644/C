#include <stdio.h>
int Tree(int n , char sign){
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(k=0;k<2*i-1;k++){
			printf("%c",sign);
		}
		printf("\n");
	}
}
int main(){
	int i,j,k,n;
	char sign;
	scanf("%d %c",&n,&sign);
	printf("%c",Tree(n,sign));
}
