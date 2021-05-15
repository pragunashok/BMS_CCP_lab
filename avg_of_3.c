#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,avg;                                            //initialising the three input values, and the average
    printf("Program to find average of three numbers\n");
    printf("Enter the three numbers");                          //prompt user to enter the three values
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);                                            //accepting user's input
    avg=(a+b+c)/3;                                              // calculating average
    printf("The average of the three numbers is %f", avg);      //printing the answer
    return 0;
}
