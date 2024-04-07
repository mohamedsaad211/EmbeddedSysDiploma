#include<stdio.h>

int main()

{
	char x[50],rx[50];
	char *px=x;
	char *prx=rx;
	int s=0;
	int i=0;
	printf("Input the number of elements to store in the array (max 15) : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&s);
	fflush(stdin); fflush(stdout);
	printf("Input %d number of elements in the array :\n",s);
	fflush(stdin); fflush(stdout);
	while(!(i==s))
	{
		printf("\n element -%d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",px);
		fflush(stdin); fflush(stdout);
		px++;
		i++;
	}
	printf("The elements of array in reverse order are :");
	int j;
	px=x+s-1;
	for(j=s;j>0;j--)
	{
		printf("\n element -%d :%d ",j,*px);
		px--;
	}
	return 0;

}
