//To ask user for row and columns and print a matrix accordingly
#include <stdio.h>


void main()
{
	int i,j,row,column;

	printf("Enter the number of rows for the matrix:");
	scanf("%d",&row);
	printf("Enter the number of columns for the matrix:");
	scanf("%d",&column);

	int a[row][column];

	printf("Enter the elements:\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("The matrix is:\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
