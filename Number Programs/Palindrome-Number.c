// Palindrome numbers

// Write a program to check whether the given number is palindrome or not

// Solution :

#include <stdio.h>
int main()
{
    int num, dig, res = 0, pv = 1;
    scanf("%d", &num);
    while (num / pv)
    {                                      // this method is for not destroying the number
        dig = (num / pv) % 10;
        res = res * 10 + dig;
        pv = pv * 10;
    }
    // while (num) {                       // Easy but destroys number
    //     res = res * 10 + (num % 10);
    //     num /= 10;
    // }
    if (num == res)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
