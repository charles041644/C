#include <stdio.h>
#include <stdlib.h>


int transportation (int x, int y ,int Matrix[10][10]){
	int   transportationMatrix[10][10],i,j;
  	for(i=0;i<10;i++){
    	for(j=0;j<10;j++){
        	transportationMatrix[i][j]=Matrix[j][i];
        }
    }
    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){
          if(j<y-1){
          	printf("%d ",transportationMatrix[i][j]);
          }else{
            printf("%d",transportationMatrix[i][j]);
          }
        }
      	printf("\n");
    }
}

int main(void) {
    int i,j,Matrix[10][10];
    int x,y;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            scanf("%d",&Matrix[i][j]);
        }
    }
	transportation(x,y,Matrix);
  	return 0;
}
