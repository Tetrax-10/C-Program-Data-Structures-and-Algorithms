// Factors of a number

// Write a program to print the factors of a given number
// Input : 10
// Output : 1 2 5 10

// Solution :

#include <stdio.h>
int main()
{
    int num, fact;
    scanf("%d", &num);
    for (fact = 1; fact <= num / 2; fact++)
    {
        if (num % fact == 0)
        {
            printf("%d ", fact);
        }
    }
    printf("%d", num);
}
