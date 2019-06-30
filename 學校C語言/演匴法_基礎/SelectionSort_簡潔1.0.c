#include<stdio.h>
#include<stdlib.h>
void SelectionSort(int* arr,int length){
int i,j,k,tmp;
for(i=0;i<length-1;i++){
	int min=i;
	for(j=i;j<length;j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}

	tmp=arr[i];
	arr[i]=arr[min];
	arr[min]=tmp;
	for(k=0;k<length;k++){
		printf("%d",arr[k]);
		if(k!=length-1) printf(" ");
	}
	if(i!=length) printf("\n");
	}
}
int main(){
	int arr[]={14,7,23,31,40,56,78,9,2};
	int i=9;
	SelectionSort(arr,i);
}


