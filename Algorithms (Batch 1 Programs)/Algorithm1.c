#include <stdio.h>
#include <stdlib.h>

void display(int *mat[], int N)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int issafe(int *mat[], int row, int col, int N)
{
    int i, j;
    for (i = col; i >= 0; i--)
    {
        if (mat[row][i] == 1)
        {
            return 0;
        }
    }
    for (i = row, j = col; i <= N - 1 && j >= 0; i++, j--)
    {
        if (mat[i][j] == 1)
        {
            return 0;
        }
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (mat[i][j] == 1)
        {
            return 0;
        }
    }
    return 1;
}
void solve(int *mat[], int col, int N)
// col=1
{
    if (col >= N) // 1>=4
    {
        display(mat, N);
    }
    else
    {
        for (int row = 0; row < N; row++) // row=2;2<4
        {
            if (issafe(mat, row, col, N) == 1)
            //  3

            {
                mat[row][col] = 1;
                solve(mat, col + 1, N);
                mat[row][col] = 0; // bactracking
            }
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N); // N=4
    int *mat[N];
    int i;
    for (i = 0; i < N; i++)
    {
        mat[i] = (int *)calloc(sizeof(int), N);
    }
    solve(mat, 0, N);
}