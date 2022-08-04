/*
1
11      21
31      41      51
61      71      81      91
*/

#include <stdio.h>


void main()
{
	int sum=1,i,j;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d\t",sum);
			sum = sum+10;
		}
		printf("\n");
	}

}
