// Prime number

// Write a program to check whether given number is prime number or not
// Input : 13
// Output : Prime

// Solution

#include <stdio.h>
#include <math.h>

int main()
{
    int num, fact, range;
    scanf("%d", &num);
    range = sqrt(num);
    for (fact = 2; fact <= range; fact++)
    {
        if (num % fact == 0)
            break;
    }
    if (fact > range)
        printf("Prime");
    else
        printf("Not");
    return 0;
}
