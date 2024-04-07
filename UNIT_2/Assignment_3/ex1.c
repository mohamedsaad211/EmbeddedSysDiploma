/*
 * main.c
 *
 *  Created on: Aug 9, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>
#include<string.h>
void prime (int x,int y);
int main()
{
  int a,b;
 // a=1;
 // b=10;
  printf("Enter two number (interval):");
  fflush(stdin); fflush(stdout);
  scanf("%d %d",&a,&b);
  prime(a,b);


  return 0;

}

void prime (int x,int y)

{
	int i,j;
	char flag;
	for(i=x;i<=y;i++)
	{

		if (i == 1 || i == 0)
		            continue;

		flag=1;
		for (j = 2; j<= i / 2; ++j)
		{
		            if (i % j == 0)
		            {
		            	flag =0;
		            	break;
		            }



		}
		if(flag)
		printf("%d  ",i);
	}


}



