#include <stdio.h>
#include <stdlib.h>
int main (void){
	int a,b,i,M=0,m=0;
	printf("�п�J��ӥ����:");
	scanf(" %d%d",&a,&b);
	for(i=1;i<a&&i<b;i++){
		if (!(a%i) && !(b%i))
			M=i;//i��M���̤j���]�� 
	}
	printf(" %d & %d ���̤j���]�� %d \n",a,b,M);
	i=a<b  ? a:b;
	while(1){
		if((i%a==0) && (i%b==0)){
			m=i;//i��m���̤p������ 
			break;
		}
		i++;
	}
	printf("%d & %d ���̤p������ %d \n",a,b,m);
	system("pause");
	return 0;
}
