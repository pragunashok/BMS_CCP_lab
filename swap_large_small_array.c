#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20],small,large,temp;
    large=-1;
    small=9999;
    printf("Hello world!\n");
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=i;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]<small)
        {
            small=j;
        }
    }
    temp=arr[small];
    arr[small]=arr[large];
    arr[large]=temp;
    printf("The array after swapping the largest and smallest elements is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
