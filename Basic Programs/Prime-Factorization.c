// Prime Factorization

// Write a program to represent the number as a product of its prime factors
// Input : 100
// Output : 2 * 2 * 5 * 5

// Solution :

#include <stdio.h>
int main()
{
    int num, fact;
    scanf("%d", &num);               // num=100
    for (fact = 2; num != 1; fact++) // fact=5
    {
        while (num % fact == 0) // 1%5==0
        {
            num = num / fact; // num = 1
            if (num == 1)
                printf("%d", fact);
            else
                printf("%d * ", fact);
        }
    }
    return 0;
}
