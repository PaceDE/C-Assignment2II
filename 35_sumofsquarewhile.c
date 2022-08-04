//Sum of square of natural numbers using while

#include <stdio.h>

void main()
{
	int num,i=0,sum=0;

	printf("Enter the no:");
	scanf("%d",&num);

	while(i<=num)
	{
		sum = sum + i*i;
		i++;
	}

	printf("Sum=%d",sum);
}
