/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>
#include<string.h>
int main()
{
  char s[100],r[100];
  printf("Enter the String :");
  fflush(stdin);fflush(stdout);
  gets(s);
  int i,j;
  i=0;
  j=strlen(s);
  while(s[i]!=0)
  {
     r[i]=s[j-i-1];
	  i++;
  }
  r[i]=0;
  printf("Reverse of String :%s",r);


  return 0;

}



