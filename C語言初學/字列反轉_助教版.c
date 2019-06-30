void reverse(char arr[]){
	int i,len=0;
	for(i=0;arr[i]!='\0';i++){
		len++;
	}  	
	for(i=0;i<len/2;i++){
		char temp=arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1]=temp;
	}
}

