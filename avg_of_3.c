#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,avg;
    printf("Program to find average of three numbers\n");
    printf("Enter the three numbers");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    avg=(a+b+c)/3;
    printf("The average of the three numbers is %f", avg);
    return 0;
}
