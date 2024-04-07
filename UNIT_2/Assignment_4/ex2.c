/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Mohamed Saad
 */

#include <stdio.h>
#include<string.h>

struct Sdistance
{
	float inch ,feet;
};
struct Sdistance add (struct Sdistance x,struct Sdistance y);

int main() {
float m,j;
struct Sdistance x1,x2,r;
printf("enter information for first distance\n");
printf("enter feet:");
fflush(stdin); fflush(stdout);
scanf("%f",&x1.feet);
fflush(stdin); fflush(stdout);
printf("enter inch:");
fflush(stdin); fflush(stdout);
scanf("%f",&x1.inch);
printf("enter information for second distance\n");
printf("enter feet:");
fflush(stdin); fflush(stdout);
scanf("%f",&x2.feet);
fflush(stdin); fflush(stdout);
printf("enter inch:");
fflush(stdin); fflush(stdout);
scanf("%f",&x2.inch);
//x1.inch=2.2; x1.feet=1.1;
//x2.feet=1.2; x2.inch=0.8;
r=add(x1,x2);
printf("sum of distances=%0.2f'-%0.2f\"",r.feet,r.inch);
/*
m=r.inch;
j=r.feet;
*/

    return 0;
}
struct Sdistance add (struct Sdistance x,struct Sdistance y)
{
	float f;
	int q;
	struct Sdistance result;
	result.feet =x.feet+y.feet;
	result.inch =x.inch+y.inch;
	if(result.inch ==12)
		{
			++result.feet;
			result.inch=0;
		}
	else if (result.inch >12)
	{
		q=result.inch/12;
		f=result.inch/12;
		result.inch=(f-q);
		result.feet+=q;

	}


	return result;
}

