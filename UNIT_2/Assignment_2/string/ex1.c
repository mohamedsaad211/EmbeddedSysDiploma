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
  printf("Enter a character to find  frequency :");
  fflush(stdin);fflush(stdout);
  scanf("%c",&ch);
  int i=0,j=0;
  while(s[i]!=0)
  {
	  if(s[i]==ch)
	  {
		  j++;
	  }
	  i++;
  }
  	  printf("Frequency of %c : %d" ,ch,j );

  return 0;
}



