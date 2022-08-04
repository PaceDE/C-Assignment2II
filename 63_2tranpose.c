//To find the transpose of a given matrix

#include <stdio.h>

void main()
{
	int a[3][5] = {{-6,8,5,-1,4},{12,6,7,2,-5},{-7,8,4,7,6}};
	int i,j,transpose[5][3];

	printf("Element of a:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	for (i=0;i<3;i++)
	{
		for (j=0;j<5;j++)
		{
			transpose[j][i] = a[i][j];
		}
	}

	printf("Transpose:\n");

	for (i=0;i<5;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}

}
