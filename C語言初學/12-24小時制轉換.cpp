#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	char a[50];
	gets(a);
	char *s = strtok(a, ":"); //分割的判斷字元
	char *put[100]; //分割後放入新的字串陣列
	int s_count=0; //分幾個了


	while(s != NULL) 
	{
    	put[s_count++]=s;  //把分出來的丟進去 結果陣列
    	s = strtok(NULL, ":"); //把S清空 
	}


	for(int x=0;x<s_count;x++) //驗收成果
    {
    	printf("%d %s\n",x,put[x]);
	}

	return 0;
 }
