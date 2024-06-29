/*20. Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/
#include<stdio.h>
void main()
{
	int in,lo,sal;
	printf("Your monthly salary is :");
	scanf("%d",&sal);
	
	in=(sal*10)/100;
	lo=sal-in-in;
	printf("installment find out of remaining salary is %d",lo);
	
	
	
}
