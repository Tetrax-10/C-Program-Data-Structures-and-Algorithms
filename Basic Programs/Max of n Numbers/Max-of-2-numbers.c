// Max of 2 numbers - Macros

// Write a program to find maximum of two numbers using macros

// Solution

#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
int main()
{
    int n1, n2, largest;
    scanf("%d%d", &n1, &n2);
    largest = MAX(n1, n2);
    printf("%d", largest);
    return 0;
}
