//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable
#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter number no1 value :");
	scanf("%d",&no1);
	printf("Enter number no2 value :");
	scanf("%d",&no2);
	no3=no1;
	no1=no2;
	no2=no3;
	printf("after swaping is %d %d \n",no1,no2);
	no1=no2+no1;
	no2=no1-no2;
	no1=no1-no2;
	printf("after swaping is %d %d",no1,no2);
    
}
