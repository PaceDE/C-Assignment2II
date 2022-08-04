//Sum of square of natural numbers using do..while
#include <stdio.h>

void main()
{
	int num,i=0,sum=0;

	printf("Enter the number:");
	scanf("%d",&num);

	do
	{
		sum = sum + i*i;
		i++;
	}while(i<=num);

	printf("Sum=%d",sum);
}
