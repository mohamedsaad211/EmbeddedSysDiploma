/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>

int main()
{
  char s[100],ch;
  printf("Enter the String :");
  fflush(stdin);fflush(stdout);
  gets(s);
  int i=0;
  while(s[i]!=0)
  {
	  i++;
  }
  printf("Length of String :%d",i);

  return 0;

}



