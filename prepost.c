/* WAP to demonstrate the difference between pre-increment (++a) and post-increment (a++) using an integer variable a initialized to 10. */
#include <stdio.h>
void main()
{
 int a = 10,pre,post;
 pre = ++a;
 printf("During preincrement pre = %d and a = %d \n",pre,a);
 a = 10;
 post = a++;
 printf("During post increment post = %d and a = %d",post,a);
}