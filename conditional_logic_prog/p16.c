/*16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
void main()
{
	int tmp;
	printf("Enter temprature=");
	scanf("%d",&tmp);
	if(tmp<0)
	{
		printf("Freezing weather");
	}
	else if(tmp>=0 && tmp<=10)
	{
		printf("Very Cold weather");
	}
	else if(tmp>10 && tmp<=20)
	{
		printf("then Cold weather");
	}
	else if(tmp>20 && tmp<=30)
	{
		printf("Normal in Temp");
	}
	else if(tmp>30 && tmp<=40)
	{
		printf("Its Hot");
	}
	else if(tmp>=40)
	{
		printf("Its Very Hot");
	}
}
