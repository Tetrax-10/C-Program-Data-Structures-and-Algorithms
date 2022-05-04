// Amicable number

// Write a program to check whether given number is amicable number or not
// Input : 220 284
// Output : Amicable number

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

    if (sum1 == num2 && sum2 == num1)
        printf("Amicable");
    else
        printf("Not Amicable");
}
