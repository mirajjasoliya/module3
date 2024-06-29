/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
void main()
{
	int no1,no2;
	printf("Enter frist number=");
	scanf("%d",&no1);
	printf("Enter second number=");
	scanf("%d",&no2);
	char ch;
	printf("Enter operator=");
	scanf(" %c",&ch);
	float c;
	if(ch=='+')
	{
		c=no1+no2;
	}
	else if(ch=='-')
	{
		c=no1-no2;
	}
	else if(ch=='*')
	{
		c=no1*no2;
	}
	else if(ch=='/')
	{
		c=no1/no2;
	}
	else if(ch=='%')
	{
		c=no1%no2;
	}
	printf("\nyour ans is %f",c);
}

