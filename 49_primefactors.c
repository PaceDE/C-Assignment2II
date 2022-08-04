//To find whether a number is prime or not and find the factors

#include <stdio.h>


int main()
{
	int j,num,condition=0;

	printf("Enter your number:");
	scanf("%d",&num);
	printf("Factors:");
	for (j=1;j<num;j++)
	{
		if (num % j == 0)
		{
			condition = condition + 1;
			printf("%d,",j);
		}
	}
	printf("%d\n",num);

	if (condition>1)
	{
        printf("Composite\n");
	}
	else
	{
        printf("Prime");
	}

}
