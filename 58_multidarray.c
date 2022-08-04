//To find a multidimensional array

#include <stdio.h>


void main()
{
	int i,j;
	int a[2][2];

	printf("Enter the elements:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("The matrix is:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
