#include <stdio.h>

int main(){
	char txt;
	while(1){
		scanf("%c",&txt);
		if(txt=='\\')break;
		else if(txt=='\''||txt=='\"');
		else printf("%c",txt);
	}
	
	return 0;
}
