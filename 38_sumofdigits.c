//To find the sum of the digits

#include <stdio.h>
void main()
{
	int num, rem,sum=0;

	printf("Enter number:");
	scanf("%d", &num);
	do
	{
		rem = num % 10;
		num= num / 10;
		sum += rem;
	}while(num!=0);
	printf("The sum of digits is:%d", sum);
}
