/*9. C Program to Check Uppercase or Lowercase or Digit or Special 
Character*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter the value");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	{
		printf("This charectour is uppercase");
	}
	else if(a>='a' && a<='z')
	{
		printf("This charectour is lowercase");
	}
	else
	{
		printf("This charectour is special charectour");
	}
}
