#include<stdio.h>
int main()
{ 
	int no1,no2;
	printf("Enter two number");
	scanf("%d %d",&no1,&no2);
	
	int no3;	
	
	no3=no1+no2;
	printf("\n addition is %d",no3);
	
	no3=no1-no2;
	printf("\n substraction is %d",no3);
	
	no3=no1*no2;
	printf("\n multiplication is %d",no3);
	
	no3=no1/no2;
	printf("\n division is %d",no3);
	
	no3=no1%no2;
	printf("\n modulo is %d",no3);
	
	
	return 0;
}
