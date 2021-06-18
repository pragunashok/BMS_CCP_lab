#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20];
    int greatest=-1;
    printf("Enter the number of elements of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>greatest)
        {
            greatest=arr[j];
        }
    }
    printf("The greatest number is %d", greatest);
    return 0;
}
