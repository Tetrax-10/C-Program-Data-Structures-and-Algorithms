// Right construction

// Sample Output
// 1
// 1 1
// 2
// 2 12
// 3
// 3 123
// 4
// 4 1234
// 5
// 5 12345

#include <stdio.h>
int main()
{
    int num, res = 0;
    while (1)
    {
        scanf("%d", &num); // Always get number
        if (num == -1)
            break;
        res = res * 10 + num;
        printf("%d %d\n", num, res);
    }
    return 0;
}
