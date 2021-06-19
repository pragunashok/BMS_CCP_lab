#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20],n,sum;
    sum=0;
    printf("Hello world!\n");
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of the elements of the array is %d\n", sum);
    return 0;
}
