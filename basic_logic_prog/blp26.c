//26. Convert temperature Fahrenheit to Celsius 
#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter fahrenherit temperature:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\n Celsius temperature is %f",c);
	
	
}
