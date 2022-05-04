// Perfect number

// Write a program to check whether given number is perfect or not
// Input : 6
// Output : Perfect number

// Solution :

#include <stdio.h>
int main()
{
    int num, fact, sum = 0;
    scanf("%d", &num);
    for (fact = 1; fact <= num / 2; fact++)
    {
        if (num % fact == 0)
            sum = sum + fact;
    }
    if (sum == num)
        printf("Perfect number");
    else
        printf("Not a Perfect number");
}
