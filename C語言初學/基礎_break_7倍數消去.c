#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	for(i=10;i<100;i++)
	{
		if(!(i%7));
			break;
		printf("=%d\n",i);
	}
	system ("pause");
	return 0; 
}
