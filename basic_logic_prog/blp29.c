//29. Convert minutes into seconds and hours 
#include<stdio.h>
void main()
{
	int m,s,h;
	printf("Enter total minutes ");
	scanf("%d",&m);
	
	s=m*60;
	printf("total second is %d\n",s);
	
	h=m/60;
	printf("total hourse is %d",h);
	
}
