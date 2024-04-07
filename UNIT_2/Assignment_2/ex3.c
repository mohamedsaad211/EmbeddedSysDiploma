/*
 * main.c
 *
 *  Created on: Jul 16, 2023
 *      Author: mohamed saad
 */



#include<stdio.h>

int main()
{
  float mat[10][10];
  float tra[10][10];

  int x ,y;
  printf("enter row and column of matrix :");
  fflush(stdin);fflush(stdout);
  scanf("%d%d",&x,&y);
  printf("enter the matrix element :\n");
  int i,j;
  for(i=0;i<x;i++)
  {
	  for(j=0;j<y;j++)
	  {
		  printf("element %d%d :",i+1,j+1);
		  fflush(stdin);fflush(stdout);
		  scanf("%f",&mat[i][j]);
	  }
  }
  printf("your matrix is :\n");
  int m,n;
  for(m=0;m<x;m++)
    {
  	  for(n=0;n<y;n++)
  	  {
  		  printf("%0.2f     ",mat[m][n]);


  	  }
  	  printf("\n");
    }
  int z,a;
  for(z=0;z<m;z++)
  {
	  for(a=0;a<n;a++)
	  {
		  tra[a][z]=mat[z][a];
	  }
  }

  printf("your matrix is after tran :\n");

   for(m=0;m<y;m++)
     {
   	  for(n=0;n<x;n++)
   	  {
   		  printf("%0.2f     ",tra[m][n]);


   	  }
   	  printf("\n");
     }

}



