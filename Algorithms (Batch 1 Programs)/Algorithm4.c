#include <stdio.h>
#include <stdlib.h>

int x[] = {2, 1, -1, -2, -2, -1, 1, 2};
int y[] = {1, 2, 2, 1, -1, -2, -2, -1};
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

int issafe(int *mat[], int i, int j, int N)
{
    if (i >= 0 && i <= N - 1 && j >= 0 && j <= N - 1 && mat[i][j] == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solve(int *mat[], int row, int col, int move, int N)
{
    if (move == (N * N))
    {
        display(mat, N);
    }
    else
    {
        int i;
        for (i = 0; i <= 7; i++)
        {
            int n_row = row + x[i]; // n_row=-2
            int n_col = col + y[i]; // n_col=1
            if (issafe(mat, n_row, n_col, N) == 1)
            {
                mat[n_row][n_col] = move;
                solve(mat, n_row, n_col, move + 1, N);
                mat[n_row][n_col] = -1;
            }
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N); // N=8;
    int *mat[N];
    int i;
    for (i = 0; i < N; i++)
    {
        mat[i] = (int *)malloc(sizeof(int) * N);
    }
    int j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mat[i][j] = -1;
        }
    }
    mat[0][0] = 0;
    solve(mat, 0, 0, 1, N);
}
