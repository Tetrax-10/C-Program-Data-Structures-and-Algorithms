// Pseudobinary numbers

// Solution :

#include <stdio.h>
int main()
{
    int num, pv, cons, dig;
    scanf("%d", &num); // num=53
    while (num)        // num=42
    {
        pv = 1;
        cons = 0;
        while (num / pv)
        {
            dig = (num / pv) % 10;    // dig = 5%10=5
            if (dig > 0)              // if(5>0)
                cons = 1 * pv + cons; // cons= 1 * 10 + 1 = 11
            else
                cons = 0 * pv + cons;
            pv = pv * 10; // pv = 100
        }
        if (num == cons)
            printf("%d", cons);
        else
            printf("%d+", cons);
        num = num - cons; // num = 53-11 = 42
    }
    return 0;
}
