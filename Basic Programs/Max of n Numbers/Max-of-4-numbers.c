// Max of 4 numbers- Macros

// Write a program to find maximum of four numbers using macros

// Solution :

#include <stdio.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
int main()
{
    int n1, n2, n3, n4;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    printf("%d", MAX(MAX(n1, n2), MAX(n3, n4)));
    return 0;
}
