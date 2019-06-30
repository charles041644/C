//請不停讀取字元並儲存到陣列STR，值到第二個#出現才終止，接著清除字串中所有的"和' 輸出 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i=0,j=0,count=0;
	char tmp[10000],str[10000];
	char n='a';
	while(1)
	{
		n=getchar();
		if(n=='#')
		{
			count++;
		}
		if(count==2)
		{
			break;
		}
		tmp[i]=n;
		i++;
	}
	tmp[i]='\0';
	for(i=0;i<strlen(tmp);i++)
	{
		if(tmp[i]!='\''&&tmp[i]!='\"')
		{
			str[j]=tmp[i];
			j++;
		}
	}
	return 0;
}
