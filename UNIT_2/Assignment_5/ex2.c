#include<stdio.h>

int main()

{
	char x[26];
	char *px=x;
	char i;
	for(i=0;i<26;i++)
	{
		*px=i+'A';
		px++;
	}
	px=x;
	for(i=0;i<26;i++)
	{
		printf(" %c ",*px);
		px++;
	}
	return 0;

}
