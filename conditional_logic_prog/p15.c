/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible*/
#include<stdio.h>
void main()
{
	int maths,physics,chemistry,tot,tot1;
	printf("Enter maths marks=");
	scanf("%d",&maths);
	printf("\nEnter physics marks=");
	scanf("%d",&physics);
	printf("\nEnter chemistry marks=");
	scanf("%d",&chemistry);
	tot=maths+physics+chemistry;
	tot1=maths+physics;
	if(maths>=65 && physics>=55 && chemistry>=50 && tot>=190 && tot1>=140)
	{
		printf("\nThe candidate is eligible");
	}
	else 
	{
		printf("\nThe candidate is not eligible");
	}
}
