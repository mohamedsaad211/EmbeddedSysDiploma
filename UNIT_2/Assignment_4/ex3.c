/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Mohamed Saad
 */

#include <stdio.h>
#include<string.h>

struct Scomplex
{
	float real ,imj;
}x1,x2,r;
struct Scomplex add (struct Scomplex x,struct Scomplex y);

int main() {

printf("for first complex number\n");
printf("enter real and imaginary respectively:");
fflush(stdin); fflush(stdout);
scanf("%f%f",&x1.real,&x1.imj);
fflush(stdin); fflush(stdout);
printf("for second complex number\n");
printf("enter real and imaginary respectively:");
fflush(stdin); fflush(stdout);
scanf("%f%f",&x2.real,&x2.imj);

r=add(x1,x2);
printf("sum =%0.2f+%0.2fi",r.real,r.imj);

    return 0;
}
struct Scomplex add (struct Scomplex x,struct Scomplex y)
{

	struct Scomplex result;

	result.real =x.real+y.real;
	result.imj =x.imj+y.imj;


	return result;
}

