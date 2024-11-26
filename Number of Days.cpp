#include<stdio.h>
int main()
{
	int m,y;
	printf("Enter the month number :");
	scanf("%d",&m);
	printf("Enter the year :");
	scanf("%d",&y);
	if(((y%4==0 && y%100!=0)||y%400==0) && m==2)
	printf("29");
	else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
	printf("31");
	else if(m==4 || m==6 || m==9 || m==11)
	printf("30");
	else if(m==2)
	printf("28");
	else
	printf("Invalid Date");
	return 0;
}
