/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>
#include<string.h>
void rev(int n,int s,char arr[],char rev_sent[]);



int main()
{
	char sent[100];
	char rev_sent[100];

      int i=0;
	  printf("Enter a Sentence :");
	  fflush(stdin); fflush(stdout);
	  gets(sent);

	  i=strlen(sent);
	  rev(i,i,sent,rev_sent);
	  printf("%s",rev_sent);

}

void rev(int n,int s,char arr[],char rev_sent[])



{ 	if(n>0)
	{
		if(n==s)rev_sent[n]=0;
		rev_sent[n-1]=arr[s-n];
		rev(--n,s,arr,rev_sent);

	}
}



