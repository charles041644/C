#include <stdio.h>
int main ()
{
	int grade ;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;
	
	puts("enter the  letter grade:");
	printf("enter the EOF character to end input.");
	
	
	while ( ( grade = getchar() ) != EOF ) 
	{
		switch (grade)
		{
			case 'A':
			case 'a':
			++aCount;
			break;
			
			case 'B':
			case 'b':
			++bCount;
			break;
			
			case 'C':
			case 'c':
			++cCount;
			break;
			
			case 'D':
			case 'd':
			++dCount;
			break;
			
			case 'F':
			case 'f':
			++fCount;
			break;
			
			case'\n':
			case'\t': 
			case' ':
			break;
			
			default:
				printf("%s","Incorrect letter grade entered.");
				puts("Enter a new grade.");
				break;
				
		} 
		
	}
	puts("\nTotals for each letter grade are :");
	printf("A: %u\n",aCount);
	printf("B: %u\n",bCount);
	printf("C: %u\n",cCount);
	printf("D: %u\n",dCount);
	printf("F: %u\n",fCount);

 } 
