//Program to convert decimal no. to binary

#include <stdio.h>

void main()
{
	long int decimal, rev=0, rem, i=1;

	printf("Enter decimal number:");
	scanf("%ld", &decimal);
	while(decimal!=0)
	{

		rem = decimal % 2;
		decimal = decimal / 2;
		rev = rev + rem*i;
		i = i * 10;
	}
	printf("The corresponding binary number is:%ld", rev);
}
