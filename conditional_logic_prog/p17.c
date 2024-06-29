/*17. Write a C program to check whether a triangle can be formed with the given 
values for the angles.*/
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter side 1=0");
	scanf("%d",&a);
	printf("Enter side 2=");
	scanf("%d",&b);
	printf("Enter side 3=");
	scanf("%d",&c);
	d=a+b+c;
	if(d==180)
	{
		printf("This triangle is formated");
	}
	else
	{
		printf("This triangle is unformated");
	}
	
}
