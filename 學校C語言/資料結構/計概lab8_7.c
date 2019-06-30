#include<stdio.h>
#include <string.h>
typedef struct{
 int account_number;
 char firstname[50]; 
    char lastname[50];  
    double balance;      
}account;

int main(){
    int account_number[9];  
  account user[9];
 FILE*fin;
 int number;
 char str[10],inout[5];
 double transamt,amt;
 FILE*finout;
 int i,j;
 
 finout=fopen("account.bin","rb+");
 fread(&i,sizeof(i),1,finout);
 for(j=0;j<i;j++){
  fread(&account_number[j],sizeof(account_number[j]),1,finout);
 }

  
 fin=fopen("transaction.txt","r");
 while(fscanf(fin,"%d %s %s %lf",
   &number,str,inout,&transamt)!=EOF){
  j=0;
  while(number != account_number[j]){
  j++;
  }
  fseek(finout,4+4*i+108*j+100,SEEK_SET);
  if(strcmp(inout, "out")==0){
   fread(&amt,sizeof(amt),1,finout);
   amt = amt - transamt;
   fseek(finout,-8,SEEK_CUR);
   fwrite(&amt,sizeof(amt),1,finout);
  	}else{
   fread(&amt,sizeof(amt),1,finout);
   amt = amt + transamt;
   fseek(finout,-8,SEEK_CUR);
   fwrite(&amt,sizeof(amt),1,finout);

  	}   
 }
 
 fclose(fin);
 fclose(finout);
}

