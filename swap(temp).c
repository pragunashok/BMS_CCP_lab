//Prgram to swap the values of two variables by using a temporary variable
#include <stdio.h>
#include <stdlib.h>

void swap(int, int);
int main()
{
    int a,b,temp;
    printf("Hello world!\n");
    printf("Enter the first variable");
    scanf("%d", &a);
    printf("\nEnter the second variable\n");
    scanf("%d", &b);
    printf("Before swapping, a=%d, and b=%d", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, a=%d, and b=%d", a, b);
    return 0;
}
