/*32. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\  */
#include<stdio.h>
void main()
{
	int salary,tot,da,hra;
	printf("Enter salary=");
	scanf("%d",&salary);
	if(salary>=0 && salary<=10000)
	{
		da=salary*0.80;
		hra=salary*0.20;
		tot=salary+da+hra;
		printf("\nYour total salary id %d",tot);
	}
	else if(salary>=10000 && salary<=20000)
	{
		da=salary*0.90;
		hra=salary*0.25;
		tot=salary+da+hra;
		printf("\nYour total salary id %d",tot);
	}
	else if(salary>20000)
	{
		da=salary*0.95;
		hra=salary*0.30;
		tot=salary+da+hra;
		printf("\nYour total salary id %d",tot);
	}
}
