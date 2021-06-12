#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, rem, res;
    res=0;
    printf("Hello world!\n");
    printf("Enter the number to be reversed:\n");
    scanf("%d", &f);
    while(f>0)
    {
        rem=f%10;
        f=f/10;
        res=res*10+rem;
    }
    printf("%d", res);

    return 0;
}
