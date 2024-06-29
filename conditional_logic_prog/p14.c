//14. WAP to find the largest of three numbers.
#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter no1 value=");
	scanf("%d",&no1);
	printf("Enter no2 value=");
	scanf("%d",&no2);
	printf("Enter no3 value=");
	scanf("%d",&no3);
	if(no1>no2 && no1>no3)
	{
	 	printf("no1 is max");
	}
	else if(no2>no1 && no2>no3)
	{
		printf("no2 is max");
	}
	else
	{
		printf("no3 is max");
	}
	
}
