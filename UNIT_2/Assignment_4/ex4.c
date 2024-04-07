/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Mohamed Saad
 */

#include <stdio.h>
#include<string.h>

struct SStudent
{
	char name[50];
	int rollNum;
	float marks ;
};

int main()
{
struct SStudent students[20];
int i=0,j;
printf("Enter information of students:\n");
do
{

	printf("For roll number %d \n",i+1);
	students[i].rollNum=i+1;
	printf("enter name :");
	fflush(stdin); fflush(stdout);
	gets(students[i].name);
	fflush(stdin); fflush(stdout);
	printf("enter marks :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&students[i].marks);
	fflush(stdin); fflush(stdout);
	i++;if (i==10)break;

}
while(1);
printf("Display informations of students \n");
for(j=0;j<10;j++)
{
	printf("information for roll %d\n",j+1);
	printf("name : %s\n",students[j].name);
	printf("marks : %f\n",students[j].marks);

}


    return 0;
}


