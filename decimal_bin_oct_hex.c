#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,f,a[10],n,i;
    system ("cls");
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    printf("\nChoose the number system to convert into\n  1.Binary\n  2.Trinary\n  3.Quaternary\n  4.Octal   \n  5.Hexadecimal");
    scanf ("%d", &c);
    if(c==1)
        f=2;
    if(c==2)
        f=3;
    if(c==3)
        f=4;
    if(c==4)
        f=8;
    if(c==5)
    {
        long dec, q, rem;
        int i,j = 0;
        char hexa[100];
        dec=n;
        q=dec;
        while (q!=0)
        {
            rem=q%16;
            if (rem<10)
                hexa[j++]=48+rem;
            else
                hexa[j++]=55+rem;
            q=q/16;
        }
        for (i=j-1;i>=0;i--)
                printf("%c", hexa[i]);
        return 0;
    }
    for(i=0;n>0;i++)
    {
        a[i]=n%f;
        n=n/f;
    }
    printf("\n Solution Number is=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
