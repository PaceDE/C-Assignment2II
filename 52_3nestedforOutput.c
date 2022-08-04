/*
1
2       3
4       5       6
7       8       9       10
*/

#include <stdio.h>

void main()
{
	int i,j,temp=0;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=i;j++)
		{
			temp = temp+1;
			printf("%d\t",temp);
		}
		printf("\n");
	}

}
