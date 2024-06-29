//11. WAP to find number is even or odd using ternary operator
#include<stdio.h>
void main()
{
	/*int no1,no2,no3,m;
	printf("Enter frist value=");
	scanf("%d",&no1);
	printf("Enter second value=");
	scanf("%d",&no2);
	printf("Enter third value=");
	scanf("%d",&no3);
	//m=(no1>no2 && no1>no3)?no1:(no2>no1 && no2>no3)?no2:no3;
	m=(no1 > no2) ? (no1 > no3 ? no1 : no3) : (no2 > no3 ? no2 : no3);
	printf("%d",&m);
	return 0;*/
	int a;
	printf("Enter number for check even or odd:");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even",a) : printf("%d is odd",a);
}
