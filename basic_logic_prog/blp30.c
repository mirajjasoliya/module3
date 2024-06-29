//30. WAP to convert years into days and days into years
#include<stdio.h>
void main()
{
	int y,d;
	printf("Enter total year :");
	scanf("%d",&y);
	
	d=y*365;
	printf("total days is %d \n",d);
	
	y=d/365;
	printf("total year is %d ",y);
	
	
}
