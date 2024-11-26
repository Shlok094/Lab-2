#include<stdio.h>
int main()
{
	float phy,chem,math,comp,bio;
	printf("Enter marks for Physics :");
	scanf("%f",&phy);
	printf("Enter marks for Chemistry :");
	scanf("%f",&chem);
	printf("Enter marks for Maths :");
	scanf("%f",&math);
	printf("Enter marks for Computer :");
	scanf("%f",&comp);
	printf("Enter marks for Biology :");
	scanf("%f",&bio);
	int avg=(phy+chem+math+comp+bio)/5;
	if(avg>=90)
	printf("Grade A");
	else if(avg>=80)
	printf("Grade B");
	else if(avg>=70)
	printf("Grade C");
	else if(avg>=60)
	printf("Grade D");
	else if(avg>=40)
	printf("Grade E");
	else
	printf("Grade F");
	return 0;
}
