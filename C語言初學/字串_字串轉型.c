#include <stdio.h>
#include <math.h>
int StringTrans(char *s1,char *s2,int n){
	int i,j,a=0,b=0,c=0;
	for(i=0;i<n;i++){
		a+=(s1[i]-'0')*pow(10,n-i-1);
	}
	for(j=0;j<n;j++){
		b+=(s2[j]-'0')*pow(10,n-j-1);
	}
	c=a+b;
	return c; 
}
