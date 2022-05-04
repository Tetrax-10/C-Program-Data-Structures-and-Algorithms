// Left extraction

// Without Destroying Original Number

#include <stdio.h>
int main()
{
    int num, pv = 1, dig;
    scanf("%d", &num); // num=5678

    while (num / pv) // while(0)
    {
        pv = pv * 10; // pv = 10000
    }
    pv = pv / 10; // pv=10000/10 = 1000
    while (pv)
    {
        dig = (num / pv) % 10;
        printf("%d\n", dig);
        pv = pv / 10;
    }
    return 0;
}
