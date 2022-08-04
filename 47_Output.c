//Use of a semicolon after loop

#include <stdio.h>
void main()
{
	int a=10,b;

	for(b=1;b<=10;b++);
	{
		a++;
	}
	printf("a=%d\nb=%d", a, b);

}
