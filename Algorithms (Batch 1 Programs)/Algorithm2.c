#include <stdio.h>
#include <stdlib.h>

void display(int *mat[], int N, int M)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int issafe(int n_row, int n_col, int N, int M)
{
    if (n_row >= 0 && n_row <= N - 1 && n_col >= 0 && n_col <= M - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solve(int *mat[], int row, int col, int N, int M)
{                                     // row=2,col=2,N=3,M=3
    if (row == N - 1 && col == M - 1) // 2==2&&2==2
    {
        display(mat, N, M);
    }
    else
    {
        int n_row = row, n_col = col + 1; // n_row=1,n_col=3
        if (issafe(n_row, n_col, N, M) == 1)
        {
            mat[n_row][n_col] = 1;          // mat[0][2]=1;
            solve(mat, n_row, n_col, N, M); // solve(0,2,3,3);
        }
        n_row = row + 1, n_col = col; // n_row=2,n_col=2
        if (issafe(n_row, n_col, N, M) == 1)
        {
            mat[n_row][n_col] = 1;          // mat[2][2]=1;
            solve(mat, n_row, n_col, N, M); // solve(2,2,3,3);
        }
    }
    mat[row][col] = 0; // bactracking
    printf("%d %d\n", row, col);
}
int main()
{
    int N, M;
    scanf("%d %d", &N, &M); // N=3 M=3
    int *mat[N];            // mat[3]
    int i;
    for (i = 0; i < N; i++) //;2<3 ;i=2
    {
        mat[i] = (int *)calloc(sizeof(int), M); // 12
    }
    mat[0][0] = 1;
    solve(mat, 0, 0, N, M); // func
}
