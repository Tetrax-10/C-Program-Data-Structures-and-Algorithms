// Reverse a number

// Write a program to reverse a given number

// Solution :

#include <stdio.h>
int main()
{
    long long int num, dig, res = 0, pv1 = 1, pv = 1;
    scanf("%lld", &num);
    /*while(num)
    {
        res = res * 10 + (num%10);
        num = num/10;
    }
    printf("%lld",res);*/

    while (num / pv)
    {
        pv = pv * 10;
    }
    pv = pv / 10;
    while (pv)
    {
        dig = (num / pv) % 10;
        res = dig * pv1 + res;
        pv = pv / 10;
        pv1 = pv1 * 10;
    }
    printf("%d", res);
    return 0;
}
