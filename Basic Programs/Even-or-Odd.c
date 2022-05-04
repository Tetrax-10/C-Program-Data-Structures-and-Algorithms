// Even Or Odd

// Write a program to check whether given number is even or odd :
// Input : 456
// Output : Even

// Solution :

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2) // if(1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}
