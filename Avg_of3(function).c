#include <stdio.h>
#include <stdlib.h>float avg(int,int,int);
float avg(int,int,int);
int main()
{
    int x,y,z;
    float average;
    printf("Hello world!\n");
    printf("Enter the three numbers to find average of");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    average=avg(x,y,z);
    printf("%f", average);


    return 0;
}
float avg(int a,int b,int c)
{
    float res;
    res=(float)((a+b+c)/3);
    return res;
}
