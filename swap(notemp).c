#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Hello world!\n");
    printf("Enter the first variable");
    scanf("%d", &a);
    printf("\nEnter the second variable\n");
    scanf("%d", &b);
    printf("Before swapping, a=%d, and b=%d", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, a=%d, and b=%d", a, b);
    return 0;
}
