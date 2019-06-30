#include <stdio.h>
int median(int x,int y,int z){
	int tmp;
	if(x<=y){
		if(y<=z) 
			tmp=y;
		else if (x<=z)
			if(y<=z) 
				tmp =y;
			else 
				tmp = z;
			
	}
	if(y<=z){
		if(z<=x) 
			tmp=z;
		else if (y<=x)
			if(x<=z) 
				tmp = x;
			else 
				tmp = z;
	}
	if(z<=y){
		if(y<=x) 
			tmp=y;
		else if (z<=x)
			if(y<=x) 
				tmp =y;
			else 
				tmp = x;
			
	}
	return tmp;
}
int main(){
	int x,y,z,tmp,r;
	printf("請輸入3個數字\n");
	scanf("%d %d %d",&x,&y,&z);
	printf("%d",median(x,y,z));
}
