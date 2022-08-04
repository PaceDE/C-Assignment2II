//To multiply two matrices

#include <stdio.h>

void main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][2] = {{1,2},{3,4},{5,6}};
	int i,j,k;
	int mult[2][2];

	printf("Element of matrix A:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("Element of matrix B:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}


	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			mult[i][j] =0;
			for (k=0;k<3;k++)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	printf("Multiplicaton of matrix A and B:\n");

	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",mult[i][j]);
		}
		printf("\n");
	}

}
