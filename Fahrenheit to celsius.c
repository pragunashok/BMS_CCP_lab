#include <stdio.h>
#include <stdlib.h>

int main()
{

    float c,f;                                                                   //initialising the variables to store the values
    printf("This Program Convert degrees Fahrenheit to degrees Celsius \n");
    printf("Enter The value of degrees Fahrenheit.");                            //prompting the user to enter the value in fahrenheit
    scanf("%f", &f);
    c=(((f-32)*5)/9);                                                            //calculating the corresponding value in celsius
    printf("The value of %f degrees fahrenheit in degrees celsius is ", f);
    printf("%fC", c);                                                            //printing the result
    return 0;
}
