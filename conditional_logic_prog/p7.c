//7. Accept marks from user and check pass or fail
#include<stdio.h>
void main()
{
	int guj,eng,mah,sa;
	printf("\nEnter gujarati marks=");
	scanf("%d",&guj);
	printf("\nEnter english marks=");
	scanf("%d",&eng);
	printf("\nEnter maths marks=");
	scanf("%d",&mah);
	printf("\nEnter samaj marks=");
	scanf("%d",&sa);
	if((guj>=33) && (eng>=33) && (mah>=33) && (sa>=33))
	{
		printf("\nYou are pass");
	}
	else 
	{
		printf("You are fail");
	}
}

