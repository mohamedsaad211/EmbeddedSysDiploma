/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>

int main()
{
	float arr1[2][2], arr2[2][2],arr3[2][2];


	printf("Please enter elements of 1st array \n");
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("Please enter elements of 2nd array \n");
	int a,b;
	for(a=0;a<2;a++)
		{
			for(b=0;b<2;b++)
			{
				printf("Enter b%d%d : ",a+1,b+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&arr2[a][b]);
			}
		}
	int c,d;
	for (c=0;c<2;c++)
		{
			for(d=0;d<2;d++)
			{
				arr3[c][d]=arr1[c][d]+arr2[c][d];
			}
		}
	printf("sum of two matrices \n");
	printf("%0.1f     %0.1f\n%0.1f     %0.1f",arr3[0][0],arr3[0][1],arr3[1][0],arr3[1][1]);
	return 0;
}



