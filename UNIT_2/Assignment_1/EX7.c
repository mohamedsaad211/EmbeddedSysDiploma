/*
 * Main.c
 *
 *  Created on: Jun 24, 2023
 *      Author: MohamedSaad
 */

#include<stdio.h>

void main ()
{
	float a ,b,c;

	printf("Enter Value of a :");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter Value of b :");
	fflush(stdout);
	scanf("%f",&b);
//	c=a;
//	a=b;
//	b=c;
	printf("After swapping, value of a =%f \n",(a*b)/a);
	printf("After swapping, value of b =%f",(a*b)/b);



}


