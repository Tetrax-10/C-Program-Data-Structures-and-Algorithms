// Sum of first n even numbers

// Solution :

#include <stdio.h>
int main()
{
    int range, num, sum = 0;
    scanf("%d", &range);
    /*for(num=2 ; num<=range*2 ; num+=2)
        sum = sum + num;
    printf("%d",sum);*/
    printf("%d", range * (range + 1));
    return 0;
}
