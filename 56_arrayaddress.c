//Show memory addresses of array elements

#include <stdio.h>

void main()
{
	float a[4]={20,0,5.6,98.5};
	int i;

	printf("The memory locations are:\t");
	for(i=0;i<4;i++)
	{
		printf("\na[%d]=%f is located at %u.", i, a[i], &a[i]);
	}

}
