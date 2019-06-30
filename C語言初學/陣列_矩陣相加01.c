#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int i,A1[2][3]={ {2,3,5},
         {3,6,5} };
 int j,A2[2][3]={ {6,8,4},
                  {1,2,4} };
 for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
    {
//       A2[i][j]=A1[i][j]+A2[i][j];
   printf("%d ",A1[i][j]+A2[i][j]);   
   } 
  printf("\n"); 
  }

 system("pause");
 return 0;
}
