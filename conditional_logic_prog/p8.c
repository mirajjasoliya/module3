/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height.*/
#include <stdio.h>

int main() 
{
    float height_cm;


    printf("Enter height in centimeters: ");
    scanf("%f",&height_cm);

    
    if (height_cm < 0) 
	{
        printf("Invalid height entered.\n");
    } 
	else if (height_cm < 150) 
	{
        printf("Person is Short.\n");
    } 
	else if (height_cm < 165) 
	{
        printf("Person is Average height.\n");
    } 
	else if (height_cm < 180) 
	{
        printf("Person is Tall.\n");
    } 
	else 
	{
        printf("Person is Very Tall.\n");
    }

    return 0;
}

