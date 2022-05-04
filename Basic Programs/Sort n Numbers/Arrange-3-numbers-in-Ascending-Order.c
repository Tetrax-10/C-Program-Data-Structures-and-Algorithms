// Arrange 3 numbers

// Write a program to arrange three numbers in ascending order.

// Solution

#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
#define MIN(a, b) (a) < (b) ? (a) : (b)
int main()
{
    int n1, n2, n3;
    int first, second, third;
    scanf("%d%d%d", &n1, &n2, &n3);
    first = MIN(MIN(n1, n2), n3);
    third = MAX(MAX(n1, n2), n3);
    second = (n1 + n2 + n3) - (first + third);
    printf("%d %d %d", first, second, third);
    return 0;
}
