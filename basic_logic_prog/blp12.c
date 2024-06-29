//12. Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?
#include<stdio.h>
void main()
{
	int app,st;
	printf("Enter total sudent :");
	scanf("%d", &st);
	
	app=5*st;
	printf("Apples are required :%d",app);
	
	
}
