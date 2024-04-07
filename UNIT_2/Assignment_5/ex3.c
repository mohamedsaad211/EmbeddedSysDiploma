#include<stdio.h>

int main()

{
	char x[50],rx[50];
	char *px=x;
	char *prx=rx;

	char i;
	printf("Input a string\n ");
	fflush(stdin); fflush(stdout);
	gets(x);
	char l=strlen(x);
	px=px+l-1;
	for(i=0;i<l;i++)
	{
		*prx=*px;
		px--;
		prx++;
	}
	rx[l]='\0';
	printf("Reverse of the string is :%s",rx);
	return 0;

}
