// Alternate digit swap

// Solution

#include <stdio.h>
int main()
{
    long long int num, count = 0, pv = 1, last, dig, swap, res = 0;
    scanf("%lld", &num); // num-=4397
    while (num / pv)
    {
        count++;
        pv = pv * 10;
    }
    if (count % 2 == 1)
    {
        last = num % 10;
        num /= 10;
    }
    pv = 1;
    while (num)
    {
        dig = num % 100; // dig = 74
        swap = (dig % 10) * 10 + (dig / 10);
        res = swap * pv + res;
        pv = pv * 100;
        num = num / 100;
    }
    if (count % 2 == 1)
        printf("%lld", res * 10 + last);
    else
        printf("%lld", res);
    return 0;
}
