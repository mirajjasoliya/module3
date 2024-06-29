//28. Convert years into days and months 
#include<stdio.h>
void main()
{
	int y,d,m;
	printf("Enter total years:");
	scanf("%d",&y);
	
	m=y*12;
	d=y*365;
	printf("month is %d\n",m);
	printf("day is %d",d);
}
