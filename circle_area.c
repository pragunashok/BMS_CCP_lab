//prgram to find area of circle
#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

float area(float);
int main()
{
    float r,a;
    printf("Hello world!\n");
    printf("Enter the radius of the circle");
    scanf("%f", &r);
    a=area(r);
    printf("Area of the circle is %f units", a);
    return 0;
}
float area(float rad)
{
    float res;
    res=(rad*pi*pi);
    return res;
}
