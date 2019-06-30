#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
  	char *s = malloc(sizeof(char)*100);
  	gets(s);
  	for(i=0;s[i]!='\0';i++){
  		if(s[i]=='a') s[i]='A';
  		if(s[i]=='d') s[i]='D';
  		if(s[i]=='t') s[i]='T';
  		if(s[i]==' ') s[i]='\n';
		printf("%c",s[i]); 
	}
	
} 
