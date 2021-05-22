//program to convert input time in days, hours, minutes to just minutes
#include <stdio.h>
#include <stdlib.h>

float minutes(int,int,int);
int main()
{
    int d,h,m,ans;
    printf("Hello world!\n");
    printf("Enter the number of days\n");
    scanf("%d", &d);
    printf("\nEnter the number of hours\n");
    scanf("%d", &h);
    printf("\nEnter the number of minutes\n");
    scanf("%d", &m);
    ans=minutes(d,h,m);
    printf("The solution is %d minutes", ans);


    return 0;
}
float minutes(int a,int b,int c)
{
    float md,mh,res;
    md=(a*1440);
    mh=(b*60);
    res=md+mh+c;
    return res;

}
