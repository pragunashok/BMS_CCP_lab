#include <stdio.h>
#include <stdlib.h>

int main()
{

    float c,f;
    printf("This Program Convert degrees Fahrenheit to degrees Celsius \n Enter The value of degrees Fahrenheit.");
    scanf("%f", &f);
    c=(((f-32)*5)/9);
    printf("The value of %f degrees fahrenheit in degrees celsius is ", f);
    printf("%fC", c);
    return 0;
}
