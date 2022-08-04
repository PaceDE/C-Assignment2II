//To find the sum of diagonal of a matrix

#include <stdio.h>

void main()
{
	int a[3][3] = {{5,9,0},{1,6,3},{2,7,4}};
	int sum1=0,sum2=0,i,j;

	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i==j)
			{
				sum1= sum1 + a[i][j];
			}
		}
	}
	printf("Diagonal 1=%d\n",sum1);


	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{

			if (i+j==2)
				{
					sum2 = sum2 + a[i][j];
				}
		}
	}
	printf("Diagonal 2=%d\n",sum2);
	printf("Total Sum=%d\n",sum1+sum2);

}
