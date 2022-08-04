//To print something when input is 1 and exit the program when input is 2

#include <stdio.h>
void main()
{
	int x;

	printf("Enter 1 to display something or 2 to exit:");
	scanf("%d", &x);
	if(x==1)
		printf("Learning C");
	else if(x==2)
		exit(0);
	else
		printf("Enter either 1 or 2");

}
