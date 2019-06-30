#include <stdio.h>
double median(double x,double y,double z){
	double tmp;
	if(x<=y){
		if(y<=z) tmp=y;
		else if (x<=z)
			if(y<=z) tmp =y;
			else tmp = z;
			
	}
	if(y<=z){
		if(z<=x) tmp=z;
		else if (y<=x)
			if(x<=z) tmp = x;
			else tmp = z;
	}
	if(z<=y){
		if(y<=x) tmp=y;
		else if (z<=x)
			if(y<=x) tmp =y;
			else tmp = x;
			
	}
	return tmp;
}
int main(){
	double x,y,z,tmp;
	printf("請輸入3個數字\n");
	scanf("%d %d %d",&x,&y,&z);
	double median();
	printf("%d",tmp);
	//printf("%d",tmp);
}
