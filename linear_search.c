#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,search, arr[20];
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the search element\n");
    scanf("%d", &search);
    printf("The element is present at the location \n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d", i);
        }
    }
    return 0;
}
