#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int* arr,int l,int k){
	int le=0,re=l-1,m;
	while(le<=re){
		m=(re+le)/2;
		printf("lowIndex=%d midIndex=%d highIndex=%d mid_num=%d\n",le,m,re,arr[m]);	
		if(arr[m]==k){
			return m;
		}else{
			if(arr[m]>k){
				re=m-1;
			}else{
				le=m+1;
			}
		}
	}return -1;

}
int main(){
	int arr[]={5,8,10,13,17,26,37,44,56,64,71,88,97};
	BinarySearch(arr,14,88);
} 
