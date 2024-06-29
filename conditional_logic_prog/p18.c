//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
void main()
{
	int p,s,t;
	printf("Enter purchase price=");
	scanf("%d",&p);
	printf("Enter salling price=");
	scanf("%d",&s);
	if(p<s)
	{
		t=s-p;
		printf("\n profit is %d",t);
	}
	else if(s<p)
	{
		t=p-s;
		printf("\n loss is %d",t);
	}
	else
	{
		printf("\nprofit is %d");
	}
	
}       
