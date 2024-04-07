/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>

int main()
{
  int arr[100];
  int n,l,v; // n: for array size & l :for location & v:for value
  printf("enter number of elements :");
  fflush(stdin);fflush(stdout);
  scanf("%d",&n);
  int i;

  for(i=0;i<n;i++)
  {
	 scanf("%d",&arr[i]);
  }

  printf("Enter the element to be inserted : ");
  fflush(stdin);fflush(stdout);
  scanf("%d",&v);

  printf("Enter the location : ");
  fflush(stdin);fflush(stdout);
  scanf("%d",&l);
    n++;
    l--;
  for(i=n;i>=l;i--)
    {
  	arr[i]=arr[i-1];
    }
  arr[l]=v;
  for(i=0;i<n;i++)
   {
 	 printf("%d ",arr[i]);
   }

}



