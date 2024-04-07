/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>
#include<string.h>
int fact (int n);
int main()
{
  int a;
//a=5;
  printf("Enter a positive integer :");
  fflush(stdin); fflush(stdout);
  scanf("%d",&a);
  printf("factorial of %d : %d",a,fact(a));


//fact(a);
  return 0;

}

int fact (int n)

{

	if (n!=1)
	return n*fact(n-1);
}



