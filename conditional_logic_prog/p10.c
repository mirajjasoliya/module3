//10. WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number =");
	scanf("%d",&a);
	if(a>0)
	{
		printf("This is a positive number");
	}
	else if(a<0)
	{
		printf("This is a nagative number");
	}
	else
	{
		printf("This value is ziro 0");
	}
}
