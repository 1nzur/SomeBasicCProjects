/* WAP to initialize an integer num to 10, apply compound assignment operators (+=, -=, *=, /=), and print the result after each operation.*/
#include <stdio.h>
void main(){
	int a = 10;
	a += 5;
	printf("Using += results = %d \n",a);
	a -= 10;
	printf("Using -= results = %d \n",a);
	a *= 6;
	printf("Using *= results = %d \n",a);
	a /= 3;
	printf("Using /= results = %d \n",a);
}