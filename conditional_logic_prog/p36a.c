/*37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case*/

//A
#include<stdio.h>
void main()
{
	int no;
	printf("\n Enter any 1  To 7 number=");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf("\n Monday");
			break;
			
		case 2:
			printf("\n tuseday");
			break;
			
		case 3:
			printf("\n wenasday");
			break;
			
		case 4:
			printf("\n thersday");
			break;
			
		case 5:
			printf("\n friday");
			break;
			
		case 6:
			printf("\n saterday");
			break;	
			
		case 7:
			printf("\n sunday");
			break;					
	}
}

