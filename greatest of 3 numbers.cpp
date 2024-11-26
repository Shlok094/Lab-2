#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the value of First Number :");
	scanf("%f",&a);
	printf("Enter the value of Second Number :");
	scanf("%f",&b);
	printf("Enter the value of Third Number :");
	scanf("%f",&c);
	if(a>b && a>c)
	printf("%f is the greatest number",a);
	if(b>a && b>c)
	printf("%f is the greatest number",b);
	if(c>b && c>a)
	printf("%f is the greatest number",c);
	return 0;
}
