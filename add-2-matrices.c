#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10][10],arr2[10][10],arr3[10][10],x,y;
    printf("Hello world!\n");
    printf("Enter the number of rows in the matrix\n");
    scanf("%d", &x);
    printf("Enter the number of columns in the matrix\n");
    scanf("%d", &y);
    printf("the matrix is a %dx%d matrix\n", x, y);
    printf("Enter the elements of the first matrix\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nThe first matrix is\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix is\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe sum of the 2 matrices is\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
