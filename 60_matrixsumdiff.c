//Sum and difference between matrices

#include <stdio.h>


void main()
{
	int a[2][2],b[2][2],i,j,sum[2][2],diff[2][2];

	printf("Enter the elements of a:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the elements of b:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("Element of a:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("Element of b:\n");
	for (i=0;i<2;i++)
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
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n");
	printf("Sum:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}


	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			diff[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\n");
	printf("Difference:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",diff[i][j]);
		}
		printf("\n");
	}

}
