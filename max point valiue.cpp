#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first point value :");
	scanf("%d",&a);
	printf("Enter the second point value :");
	scanf("%d",&b);
	printf("Enter the third point value :");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
	    printf("%d",a);
    }
    if(b>a)
    {
    	if(b>c)
    	printf("%d",b);
	}
	if(a==b && b>c)
	printf("%d",a);
	if(c>a)
	{
		if(c>b)
	    printf("%d",c);
    }
    if(b==c && b>a)
    printf("%d",b);
    if(a==b && b==c)
    printf("%d",a);
	return 0;
}
