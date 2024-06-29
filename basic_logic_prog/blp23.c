//23. WAP to calculate swap 2 numbers with using of multiplication and division. 
#include<stdio.h>
void main()
{
	int no1,no2;
	printf("Enter number no1 value 1:");
	scanf("%d",&no1);
	printf("Enter number no2 value 2:");
	scanf("%d",&no2);
	

	no1=no2*no1;
	no2=no1/no2;
	no1=no1/no2;
	printf("after swaping is %d %d",no1,no2);
    
}
