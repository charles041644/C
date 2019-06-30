#include<stdio.h>
int main(){
  int hh,mm,ss,a=0;
  scanf("%d:%d:%d",&hh,&mm,&ss);

  if(hh>12){
  	hh=hh-12;
  	a=1;
  }
  if(a==0&&hh!=12){
  	 printf("hour=%02d(AM)\n",hh);
  }
  else if (a==1||hh==12)printf("hour=%02d(PM)\n",hh);
  printf("min=%02d\n",mm);
  printf("sec=%02d\n",ss);
  return 0;
}
/* #include<stdio.h>
int main (){
	int hh,mm,ss,a=0;
	scanf("%d:%d:%d",&hh,&mm,&ss);
	if(hh<=11)
		printf("hour=%02d(AM)\nmin=%02d\nsec=%02d\n",hh,mm,ss);
	else if(hh==12)
		printf("hour=%02d(PM)\nmin=%02d\nsec=%02d\n",hh,mm,ss);
	else
		printf("hour=%02d(PM)\nmin=%02d\nsec=%02d\n",hh-12,mm,ss);
}
*/
