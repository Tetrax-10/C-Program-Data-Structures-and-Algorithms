// Palindrome numbers

// Write a program to check whether the given number is palindrome or not

// Solution :

#include <stdio.h>
int main()
{
    int num, dig, res = 0, pv = 1;
    scanf("%d", &num);
    while (num / pv)
    {
        dig = (num / pv) % 10;
        res = res * 10 + dig;
        pv = pv * 10;
    }
    if (num == res)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
