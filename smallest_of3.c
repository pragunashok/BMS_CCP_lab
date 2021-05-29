#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,a,b,c;

    printf("Hello world!\n");
    printf("Enter the three numbers");
    scanf("%d%d%d", &a, &b, &c);
    if(b<c&&b<a)
    {
        s=b;
    }
    if(a<c&&a<b)
    {
        s=a;
    }
    if(c<a&&c<b)
    {
        s=c;
    }

    printf("The smallest number is %d", s);
    return 0;
}
