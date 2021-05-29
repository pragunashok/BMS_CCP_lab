#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,m,n;
    float r1,r2,d;
    printf("Hello world!\n");
    printf("Enter the coefficients of the quadratic equation\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    d=(sqrt((b*b)-(4*a*c)));

    if(d>0)
    {

        printf("The discriminant is equal to %.2f", d);
        printf("\n\nThe roots are real and distinct\n\n");
        r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf("The roots are %.2f and %.2f\n\n", r1, r2);
    }
    else if(d==0)
    {
        printf("The discriminant is equal to %.2f", d);
        printf("\n\n The roots are real and equal\n\n");
        r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        printf("The roots are %.2f and %.2f\n\n", r1, r1);
    }
    else
    {
        printf("\n\nThe roots are imaginary\n\n");
        m=(-b/(2*a));
        n=(sqrt((4*a*c)-(b*b)))/(2*a);
        printf("The roots are %.2f+%.2fi and %.2f-%.2fi\n\n", m,n,m,n);
    }
    return 0;
}
