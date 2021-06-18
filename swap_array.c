#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,arr[20],temp,a,b;
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the two positions to be exchange\n");
    scanf("%d", &a);
    scanf("%d", &b);

    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
