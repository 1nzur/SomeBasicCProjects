/* WAP to take three float numbers from the user, calculate their average, and print the result with two decimal places. */
#include<stdio.h>
void main(){
	float a,b,c,avg;
	printf("Enter three numbers : ");
	scanf("%f%f%f",&a,&b,&c);
	avg = (a+b+c)/3;
	printf("Average = %f",avg);
}