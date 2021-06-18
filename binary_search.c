#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, arr[20], sear, beg, end, mid,n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the array in ascending or descending order\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d", &sear);
    beg=0;
    end=n-1;
    mid=((beg+end)/2);
    while(beg<=end)
    {
        if(arr[mid]<sear)
        {
            beg=mid+1;
        }
        else if(arr[mid]==sear)
        {
            printf("The element is found at position %d", mid);
            return 0;
        }
        else if(arr[mid]>sear)
        {
            end=mid-1;
        }
        mid=((beg+end)/2);
        if (beg > end)
    printf("Not found! %d isn't present in the list.\n", sear);
    }
    if (beg>end)
    {
        printf("Not found! %d isn't present in the list.\n", sear);
    }


    return 0;
}
