#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,o,temp,a,t;
    printf("Hello world!\n");
    printf("Enter the lower limit\n\n");
    scanf("%d", &n);
    printf("Enter the upper limit\n\n");
    scanf("%d", &m);
    if(n<m)
    {
        a=0;
    }
    else
    {
        temp=m;
        m=n;
        n=temp;
        a=1;
    }
    if(n%2==0)
    {
        o=n;
    }
    else
    {
        o=n+1;
    }
    t=(m-n)/2;
    if(m%2==0)
    {

    }
    else
    {
        t--;
    }

    printf("\n\n   ");
    if(a==0)
    {

        for(int i=0;i<=t;i++)
        {
            printf("%d ", o+(2*i));
        }
    }
    else
    {
        for (int i=t;i>=0;i--)
        {
            printf("%d ", o+(2*i));
        }
    }



    return 0;
}
