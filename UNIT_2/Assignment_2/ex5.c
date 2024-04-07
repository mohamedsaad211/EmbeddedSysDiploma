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

  printf("Enter the element to be searched : ");
  fflush(stdin);fflush(stdout);
  scanf("%d",&v);

  for(i=0;i<=n;i++)
    {
  	   if(arr[i]==v)
  	   {
  		   printf("number found at the location : %d",i+1);
  		   break;
  	   }
  		   else if (i==n && arr[i]!=v) printf("Number not found");

    }

return 0;
}



