//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
void main()
{
	int wl,hl,hw,area;
	printf("Enter frist value \n");
	scanf("%d %d %d", &wl,&hl,&hw);
	
	area=2*(wl+hl+hw);
	printf("area of a rectangular prism %d",area);	
}
