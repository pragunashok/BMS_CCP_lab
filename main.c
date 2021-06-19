#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20],temp;
    printf("Hello world!\n");
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=(n/2);i++)
    {
        temp=arr[n-i];
        arr[n-i]=arr[i-1];
        arr[i-1]=temp;


    }
    printf("The array after being reversed is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
