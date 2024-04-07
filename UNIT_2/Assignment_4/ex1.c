/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Mohamed Saad
 */

#include <stdio.h>
#include<string.h>

struct Sstudent
{
	char name[50];
	int rollNum;
	float marks ;
};

int main() {

	struct Sstudent s1;
	char z[50];

 printf("Enter name :");
 fflush(stdin); fflush(stdout);
 gets(z);
 fflush(stdin); fflush(stdout);
 printf("Enter roll number :");
 fflush(stdin); fflush(stdout);
 scanf("%d",&s1.rollNum);
 fflush(stdin); fflush(stdout);
 printf("Enter marks :");
 fflush(stdin); fflush(stdout);
 scanf("%f",&s1.marks);
 fflush(stdin); fflush(stdout);
 strcpy(s1.name,z);


 printf("Displaying information :\n");
 printf("name: %s \n",s1.name);
 printf("Roll: %d \n",s1.rollNum);
 printf("Marks:%0.2f \n",s1.marks);





    return 0;
}
