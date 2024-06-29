//13. WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
void main()
{
	int no1,no2,no3,max;
	printf("Enter frist value=");
	scanf("%d",&no1);
	printf("Enter second value=");
	scanf("%d",&no2);
	printf("Enter third value=");
	scanf("%d",&no3);
	max=(no1 < no2) ? (no1 < no3 ? no1 : no3) : (no2 < no3 ? no2 : no3);
	printf(" minimum number is %d",max);
	

}
