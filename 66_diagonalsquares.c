//To find the sum of square of diagonal elements

#include <stdio.h>


void main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int sum=0,i,j;
	printf(" Element of matrix is\n");

	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		    printf("%d \t",a[i][j]);
		}
		printf("\n");
	}

	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i==j)
			{
				sum= sum + a[i][j]*a[i][j];
			}
		}
	}
	printf(" Sum of square of Diagonal=%d\n",sum);




}
