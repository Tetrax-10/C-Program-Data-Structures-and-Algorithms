// Foo - Bar

// Given a number ,
// If number is divisible by 3 , print Foo
// If number is divisible by 5, print Bar
// If number is divisible by both 3 & 5 print FooBar

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    /*if(num%3==0 && num%5==0)
        printf("FooBar");
    else if(num%3 == 0)
        printf("Foo");
    else if(num%5==0)
        printf("Bar");*/
    if (num % 3 == 0)
        printf("Foo");
    if (num % 5 == 0)
        printf("Bar");

    return 0;
}
