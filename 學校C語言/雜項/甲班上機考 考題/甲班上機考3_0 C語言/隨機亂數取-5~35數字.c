#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    unsigned seed;
    seed = (unsigned)time(NULL); // 取得時間序列
    srand(seed); // 以時間序列當亂數種子
    for(i=1; i<=100; ++i)
	{
		
		printf("%d ", rand()%35-5);
		if(i%5==0)
		{			
			printf("\n");	
		}
	} 
        
    //getchar();
    return 0;
}
