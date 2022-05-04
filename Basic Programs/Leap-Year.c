// Leap Year

// Write a program to check whether given year is leap year or not

// Solution

#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        printf("Leap Year");
    else
        printf("Not");
    return 0;
}