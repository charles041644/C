#include<stdio.h>
#include<stdlib.h>
void insertionSort (int* arr,int length){
	int i,j,k,tmp;
	for(i=1;i<length;i++){
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;//等同從後面往前面插入數值; 
			}
			
		}
		for(k=0;k<length;k++){
			printf("%d",arr[k]);
			if(k!=length) printf(" ");
		}
		if(i!=length) printf("\n");
	}
} 
int main(){
	int arr[]={14,7,23,31,40,56,78,9,2};
	int i=9;
	insertionSort(arr,i);
}
