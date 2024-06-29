//34. Accept month number and display month name
#include<stdio.h>
void main()
{
	int no;
	printf("Enter any month number");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf("january");
			break;
			
		case 2:
			printf("fabruary");
			break;
			
		case 3:
			printf("march");
			break;
					
		case 4:
			printf("april");
			break;
			
		case 5:
			printf("may");
			break;
			
		case 6:
			printf("jun");
			break;
			
		case 7:
			printf("julay");
			break;
			
		case 8:
			printf("augast");
			break;
			
		case 9:
			printf("saptember");
			break;
			
		case 10:
			printf("october");
			break;	
			
		case 11:
			printf("navember");
			break;
			
		case 12:
			printf("december");
			break;				
			
		default:
		      printf("This month number is not valid");		
	}
}

