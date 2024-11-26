#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an Alphabet : ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("Uppercase");
	else if(ch>='a' && ch<='z')
	printf("Lowercase");
	else
	printf("Invalid input");
	return 0;
}
