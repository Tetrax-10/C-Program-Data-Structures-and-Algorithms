// Betrothed numbers

// Write a program to check whether given number is betrothed number or not
// Input : 48 75
// Output : Betrothed number

// Solution :

#include <stdio.h>
int main()
{
    int num1, num2, sum1 = 0, sum2 = 0, fact;
    scanf("%d%d", &num1, &num2);
    for (fact = 1; fact <= num1 / 2; fact++)
        if (num1 % fact == 0)
            sum1 = sum1 + fact;

    for (fact = 1; fact <= num2 / 2; fact++)
        if (num2 % fact == 0)
            sum2 = sum2 + fact;

    if (sum1 == num2 + 1 && sum2 == num1 + 1)
        printf("Betrothed");
    else
        printf("Not Betrothed");
}
