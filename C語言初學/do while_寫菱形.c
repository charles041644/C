#include <stdio.h>
#include <stdlib.h>
int main(void)
{   int i,n,t,s,g;

    do
    {

     printf("��J�@�Ӿ��:");
     scanf("%d",&n);
     i=1;
     while (i<=n)
     {    s=n;
          while(s>i)
          {   printf("  ");
              s--;
          }
          t=1;
          while(t<=i)
          {   printf("��");
              t++;
          }
          t=1;
          while(t<i)
          {   printf("��");
              t++;
          }
          printf("\n");
          i++;
     }
    
     printf("\n");
     printf("�n�~���?? (1=yes, others=no)");
     scanf("%d",&g);
    }while(g==1);
    system("pause");
    return(0);
}
