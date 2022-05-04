// Sum of digits

// Write a program to find the sum of digits of a given number

// Solution :

#include <stdio.h>
int main()
{
    long long int num, sum = 0;
    scanf("%lld", &num);
    while (num)
    {
        sum = sum + num % 10;
        num /= 10;
    }
    printf("%lld", sum);
    return 0;
}
