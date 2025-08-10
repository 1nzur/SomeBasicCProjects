#include<stdio.h>
void main()
{
	float a,b,p;
	printf("Enter the sides of rectangle : ");
	scanf("%f%f",&a,&b);
	p = 2*(a+b);
	printf("The perimeter is %f",p);
}