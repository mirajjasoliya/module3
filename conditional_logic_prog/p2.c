/*2. Write a C program to read the value of an integer m and display the value of 
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter the value of integer =");
	scanf("%d",&n);
	
	if(m > 0)
	{
		n=1;
	}
	else if (m==0)
	{
		n=0
	}
	else
	{
		n=-1;
	}
	printf("\n The value of n is %d",n);
}
