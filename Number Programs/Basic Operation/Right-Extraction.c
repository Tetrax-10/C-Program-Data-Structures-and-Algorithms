// Right Extraction

#include <stdio.h>
int main()
{
    int num, dig, pv = 1;
    scanf("%d", &num);
    while (dig != 0)
    {
        dig = (num / pv) % 10;
        printf("%d %d\n", num, dig);
        pv = pv * 10;
    }
    printf("%d", num);
    return 0;
}
