#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	char a[50];
	gets(a);
	char *s = strtok(a, ":"); //���Ϊ��P�_�r��
	char *put[100]; //���Ϋ��J�s���r��}�C
	int s_count=0; //���X�ӤF


	while(s != NULL) 
	{
    	put[s_count++]=s;  //����X�Ӫ���i�h ���G�}�C
    	s = strtok(NULL, ":"); //��S�M�� 
	}


	for(int x=0;x<s_count;x++) //�禬���G
    {
    	printf("%d %s\n",x,put[x]);
	}

	return 0;
 }
