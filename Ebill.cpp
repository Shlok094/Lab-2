#include<stdio.h>
int main()
{
	int n,x,Bill;
	printf("Enter the number of units used :");
	scanf("%d",&n);
	printf("Enter cost per unit :");
	scanf("%d",&x);
	Bill=x*n;
	printf("Electricity Bill = %d",Bill);
	return 0;
}
