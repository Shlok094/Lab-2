#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the first side of triangle :");
	scanf("%f",&a);
	printf("Enter the second side of triangle :");
	scanf("%f",&b);
	printf("Enter the third side of triangle :");
	scanf("%f",&c);
	if(a==b)
	{
	    if(b==c)
	    printf("Equilateral Triangle");
        else
        printf("Isosceles Triangle");
    }
    else if(b==c)
    printf("Isosceles Triangle");
    else if(c==a)
    printf("Isosceles Triangle");
    else
    printf("Scalene Triangle");
    return 0;
}
