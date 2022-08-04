/*
1
11
111
1111
11111
111111
*/

#include <stdio.h>

void main()
{
    int i,j,a=0,sum=0;

    for (i=1;i<=3;i++)
    {
        for (j=1;j<=i;j++)
        {
            sum = (a * 10) +1;

            printf("%d\n",sum);
            a = sum;
        }
    }

}
