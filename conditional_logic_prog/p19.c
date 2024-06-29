#include<stdio.h>
void main()
{
	int id,unit,tot;
	char name[20];
	printf("Enter id=");
	scanf("%d",&id);
	printf("Enter customer name=");
	scanf("%s",&name);
	printf("Enter unit=");
	scanf("%d",&unit);
	if(unit>=0 && unit<=350)
	{
		tot=unit*1.2;
		printf("\nTotal ruppies id %d",tot);
	}
	else if(unit>350 && unit<=600)
	{
		tot=unit*1.5;
		printf("\nTotal ruppies id %d",tot);
	}
	else if(unit>600 && unit<=800)
	{
		tot=unit*1.8;
		printf("\nTotal ruppies id %d",tot);
	}
	else if(unit>800)
	{
		tot=unit*2.0;
		printf("\ntotal ruppies id %d",tot);
	}
	else
	{
		printf("\n invelid input");
	}
	
}
