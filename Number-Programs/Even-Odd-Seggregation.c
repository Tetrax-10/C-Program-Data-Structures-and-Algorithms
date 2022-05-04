// Even - Odd seggregation

// Solution :

#include <stdio.h>
int main()
{
    long long int num, dig, even = 0, e_pv = 1, odd = 0, o_pv = 1;
    scanf("%lld", &num);
    while (num)
    {
        dig = num % 10;
        if (dig % 2 == 0)
        {
            even = dig * e_pv + even;
            e_pv = e_pv * 10;
        }
        else
        {
            odd = dig * o_pv + odd;
            o_pv = o_pv * 10;
        }
        num = num / 10;
    }
    printf("%lld", even * o_pv + odd);
    return 0;
}
