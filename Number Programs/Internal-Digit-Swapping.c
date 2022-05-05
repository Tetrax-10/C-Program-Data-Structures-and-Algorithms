// Digit Swapping

// Input :
// num - 847695
// pos1 - 2
// pos2 - 4

// Output : 849675
// Solution :

#include <stdio.h>
int main()
{
    int num, pos1, pos2, dig1, dig2, pv1 = 1, pv2 = 1;
    scanf("%d%d%d", &num, &pos1, &pos2);
    while (--pos1)
        pv1 = pv1 * 10;

    while (--pos2)
        pv2 = pv2 * 10;

    dig1 = (num / pv1) % 10;
    dig2 = (num / pv2) % 10;
    num = num - (dig1 * pv1) - (dig2 * pv2);
    num = num + (dig1 * pv2) + (dig2 * pv1);
    printf("%d", num);
    return 0;
}
