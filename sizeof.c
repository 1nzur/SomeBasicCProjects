/* WAP to print the size of int,char,float, and double data types using the sizeof operator. */
#include<stdio.h>
void main(){
	int a = 1;
	float b = 3.14;
	char n[50] = "Samul";
	double c = 3.1415926535897;
	printf("Size of int = %d, size of float = %d, size of char = %d and size of double = %d",sizeof(a),sizeof(b),sizeof(n),sizeof(c)); 
} 