#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f;
    printf("Hello world!\n");
    printf("Enter the number to find the factorial");
    scanf("%d", &n);
    f=1;
    for(int i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("The factorial of %d is %d", n, f);
    return 0;
}
