/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>

int main()
{
	float num [100];
	int n;
	printf("enter numbers of data:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	int i;
	float sum=0,avg;
	for(i=0;i<n;i++)
	{
		printf("%d. enter number :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	avg=sum/n;
	printf("Average equal: %0.2f",avg);
	return 0;
}



