//1. Write a C program to accept two integers and check whether they are equal 
//or not
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter number 1=");
	scanf("%d",&num1);
	printf("Enter number 2=");
	scanf("%d",&num2);
	if(num1 == num2)
	{
		printf("Enter number are equal");
	}
	else
	{
		printf("Enter number are not_equal");
	}
}
