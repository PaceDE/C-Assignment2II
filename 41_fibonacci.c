//To print a fibonacci sequence

#include <stdio.h>

void main()
{
	int fib1,fib2,next,num,i=1;
	fib1=-1;
	fib2=1;
	printf("Enter number upto which you want Fibonacci sequence:");
	scanf("%d", &num);
	do
	{
		next=fib1+fib2;
		fib1=fib2;
		fib2=next;
		printf("%d", next);
		i++;
	}while(i<=num);
}
