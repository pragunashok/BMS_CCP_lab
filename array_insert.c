#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, arr[20], pos, x;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be added\n");
    scanf("%d", &x);
    printf("Enter the location to insert\n");
    scanf("%d", &pos);
    n++;
    for(int i=pos;i<n;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
