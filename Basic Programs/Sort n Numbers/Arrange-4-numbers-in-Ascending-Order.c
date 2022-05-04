// Arrange 4 numbers

// Write a program to arrange four numbers in ascending order.

// Solution

#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
#define MIN(a, b) (a) < (b) ? (a) : (b)
int main()
{
    int n1, n2, n3, n4;
    int first, second, third, fourth;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    first = MIN(MIN(n1, n2), MIN(n3, n4));
    fourth = MAX(MAX(n1, n2), MAX(n3, n4));
    second = MAX(MIN(n1, n2), MIN(n3, n4));
    third = MIN(MAX(n1, n2), MAX(n3, n4));
    if (second < third)
        printf("%d %d %d %d", first, second, third, fourth);
    else
        printf("%d %d %d %d", first, third, second, fourth);
    return 0;
}
