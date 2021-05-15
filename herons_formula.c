#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,s,area;
    printf("Program to find area of triangle given three sides\n");
    printf("Enter the three side lengths");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f", area);
    return 0;
}
