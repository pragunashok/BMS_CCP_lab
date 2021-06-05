#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,o,sum=0;
    printf("Hello world!\n");
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(int i=1; i<=((n/2)+1); i++)
    {
        o=((2*i)-1);
        m=o*o;
        sum=sum+m;
    }
    printf("the sum of squares of all odd numbers till %d is %d  \n\n\n", n, sum);

    return 0;
}
