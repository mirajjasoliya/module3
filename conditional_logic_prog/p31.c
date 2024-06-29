/*31. Write a program in C to read any Month Number in integer and display the 
number of days for this month.*/
#include<stdio.h>
void main()
{
	int month;
	printf("Enter any month=");
	scanf("%d",&month);
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		printf("\nThis month day is 31");
	}
	else if(month==2)
	{
		printf("\nThis month day is 28/29");
	}
	else
	{
		printf("\nThis month day is 30");
	}
}
