// Max of 3 numbers - Macros

// Write a program to find maximum of three numbers using macros

// Solution :

#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
int main()
{
    int n1, n2, n3, largest;
    scanf("%d%d%d", &n1, &n2, &n3);
    largest = MAX(MAX(n1, n2), n3);
    printf("%d", largest);
    return 0;
}
