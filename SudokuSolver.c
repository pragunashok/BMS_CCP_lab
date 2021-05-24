#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define N 9
int grid[N][N];
void output();
int wildguess();
int checkvalid(int grid[N][N],int row, int col, int num);
int main()
{
    /*int M;
    printf("Enter the order of the sudoku you want to solve\n 1.4x4\n 2.9x9\n 3.16x16, etc");
    scanf("%d", &M);
    N=((M+1)*(M+1));
    */

    int d,e,f,g;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            grid[i][j]=N+1;
        }

    }
    output();
    printf("Enter the given digits of the sudoku, from right to left, and top to bottom/n For unknown values, enter 0");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d", &grid[i][j]);
            if(grid[i][j]<N)
            {
                printf("Invalid input");

            }
            output();
        }
    }
    printf("\n Would you like to make any changes to the puzzle? If yes hit 0, otherwise hit any other number");
    scanf("%d", &d);
    if(d==0)
    {
        while(d==0)
        {
            printf("\nInput the position of the element which you wanna change\n");
            scanf("%d", &e);
            scanf("%d", &f);
            e--;
            f--;
            printf("The old element is %d . Now enter the new element\n", grid[f][e]);
            scanf("%d", &g);
            grid[f][e]=g;
            output();
            printf("To change another element, hit 0. To proceed with solution, hit any other number");
            scanf("%d", &d);
        }
    }
     if (wildguess(grid, 0, 0)==1)
        output();
    else
        printf("No solution exists");

    return 0;
}
void output()
{

    system("cls");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(grid[i][j]==N+1)
            {
                printf("   ");
            }
            else
            {
                printf("%d ", grid[i][j]);

            }
            if(grid[i][j]<10)
            {
                printf(" ");
            }
        }
        printf("\n");

    }
};
int checkvalid(int grid[N][N], int row, int col, int num)
{
    for(int i=0;i<=N-1;i++)
    {
        if(grid[row][i]==num)//Checking if the number 'num' is repeated in the row
        {
            return 0;
        }
    }
    for(int i=0;i<=N-1;i++)
    {
        if(grid[i][col]==num)//Checking whether the number 'num' is repated in the column
        {
            return 0;
        }
    }
    int startRow = row - row % (int)(sqrt(N)), startCol = col - col % (int)(sqrt(N));

    for (int i = 0; i < sqrt(N); i++)
    {
        for (int j = 0; j < sqrt(N); j++)
        {
            if (grid[i+startRow][j+startCol] == num)
                return 0;
        }
    }
    return 1;

}
int wildguess(int grid[N][N], int row, int col)
{


    if (row == N - 1 && col == N)
        return 1;

    if (col == N)
    {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
        return wildguess(grid, row, col + 1);

    for (int num = 1; num <= N; num++)
    {

        if (checkvalid(grid, row, col, num)==1)
        {
            grid[row][col] = num;

            if (wildguess(grid, row, col + 1)==1)
                return 1;
        }

        grid[row][col] = 0;
    }
    return 0;
}

