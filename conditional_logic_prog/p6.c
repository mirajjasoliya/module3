//6. Find the Character Is Vowel or Not
#include<stdio.h>
void main()
{
	char c;
	printf("\nEnter charectour=");
	scanf("%c",&c);
	if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u'))
	{
		printf("\n you are enterd charectour %c is Vovel",c);
    }
	else if((c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U')) 
	{
		printf("\n You enterd charectour %c is Voval",c);
	}
	 else 
	 {
	 	printf("\n you are enterd charectour %c is consonant",c);
	 }
	 
}
