// Left construction

// Sample Output
// 1
// 1 1
// 2
// 2 21
// 3
// 3 321
// 4
// 4 4321
// 5
// 5 54321

#include <stdio.h>
int main()
{
    int num, res = 0, pv = 1;
    while (10)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        res = num * pv + res;
        pv = pv * 10;
        printf("%d %d\n", num, res);
    }
    return 0;
}
