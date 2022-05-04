// Prime numbers in range

// Write a program to print all prime numbers within the given range

// Input : 10
// Output: 2 3 5 7

// Solution :

#include <stdio.h>
int main()
{
    int num, fact, range, limit;
    scanf("%d", &limit);
    for (num = 2; num <= limit; num++)
    {
        if (num % 2 == 0 && num != 2)
            continue;
        else if (num % 6 == 1 || num % 6 == 5 || num == 2 || num == 3)
        {
            range = sqrt(num);
            for (fact = 2; fact <= range; fact++)
            {
                if (num % fact == 0)
                    break;
            }
            if (fact > range)
                printf("%d ", num);
        }
    }
    return 0;
}
