#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the day of month :");
	scanf("%d",&d);
	printf("Enter the month number :");
	scanf("%d",&m);
	printf("Enter the year :");
	scanf("%d",&y);
	if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10) && d==31)
	{
		m=m+1;
		d=1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if((m==4 || m==6 || m==9 || m==11) && d==30)
	{
		m=m+1;
		d=1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && 0<<d<<31)
	{
		d=d+1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if((m==4 || m==6 || m==9 || m==11) && 0<<d<<30 )
	{
		d=d+1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if(((y%4==0 && y%100!=0)||y%400==0) && m==2 && d==29)
	{
		m=3;
		d=1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if(((y%4==0 && y%100!=0)||y%400==0) && m==2 && 0<<d<<29)
	{
		d=d+1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if(m==2 && 0<<d<<28)
	{
		d=d+1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if(m==2 && d==28)
	{
		d=1;
		m=3;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else if(m==12 && d==31)
	{
		y=y+1;
		m=1;
		d=1;
		printf("The next date is : %d/%d/%d",d,m,y);
	}
	else
	{
	printf("invalid date");
    }
    return 0;
}
