/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>
#include<string.h>
void power(int b,int p);

int r=1;

int main()
{
	  int p,b;
	  printf("Enter a base number :");
	  fflush(stdin); fflush(stdout);
	  scanf("%d",&b);
	  fflush(stdin); fflush(stdout);
	  printf("Enter a power number (positive integer) :");
	  fflush(stdin); fflush(stdout);
	  scanf("%d",&p);
	  power(b,p);
	  printf("%d^%d = %d ",b,p,r);


}

void power(int b,int p)
{
	if(p!=0)
	{
		r=b*r;
		power(b,--p);
	}


}



