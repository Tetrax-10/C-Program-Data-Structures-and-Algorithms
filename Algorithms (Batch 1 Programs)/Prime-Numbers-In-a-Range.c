#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N); // N=11
    int arr[N - 1];  // arr[10]
    int i, j;
    for (i = 0; i <= N - 2; i++)
    {
        arr[i] = i + 2;
    }
    int sq = sqrt(N); // sq=3
    // selection
    for (i = 0; arr[i] <= sq; i++) // i=0;2<=3
    {
        if (arr[i] != -1) // arr[0]2!=-1
        {
            // elimination
            for (j = arr[i] * arr[i] - 2; j <= N - 2; j = j + arr[i])
            {
                // j=2;2<=9   ;j=6
                arr[j] = -1; // arr[2]=-1
            }
        }
    }
    for (i = 0; i <= N - 2; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d ", arr[i]);
        }
    }
}