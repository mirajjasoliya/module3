/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
int main()
{
	int amount,total;
	printf("\nEnter Bill Amount=");
	scanf("%d",&amount);
	if(amount>=800)
	{
		total=amount*0.18;
		printf("\n Your Total is %d",amount+total);
	}
	else if(amount>=256 && amount<800)
	{
		printf("\n Your amount is %d",amount);
	}
	else if(amount>=0 && amount<256)
	{
		printf("\n minimum Amount Bill Not Create!!!");
	}
	
}
