//35. Accept the input month number and print number of days in that month.
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
