#include<stdio.h>
#include<stdlib.h>
int main(){
	int month,date;
	char arr[31][10]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q","�Q","�Q","�Q�T","�Q�|","�Q��","�Q��",
	"�Q�C","�Q�K","�Q�E","�G�Q","�G�Q�@","�G�Q�G","�G�Q�T","�G�Q�|","�G�Q��","�G�Q��","�G�Q�C","�G�Q�K",
	"�G�Q�E","�T�Q","�T�Q�@" };
	while(scanf("%d/%d",&month,&date)!=EOF){
		printf("%s��%s��\n",arr[month-1],arr[date-1]);
	}
	return 0;
} 
