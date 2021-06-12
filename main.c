#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;
    printf("Hello world!\n");
    printf("Enter the number to be checked prime\n");
    scanf("%d", &n);
    for (int i=n-1;i>=2;i--)
    {
        if(n%i==0)
            c++;

    }
    if(c==0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is a composite number", n);
    }
    return 0;
}
