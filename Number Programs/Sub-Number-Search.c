// Sub number search

// Solution :

#include <stdio.h>
int main()
{
    int num1, num2, pv = 1, dig;
    scanf("%d%d", &num1, &num2); // num2=23
    while (num2 / pv)            // while(0)
    {
        pv = pv * 10; // pv=100
    }
    while (num1) // while(12)
    {
        dig = num1 % pv; // dig = (12)
        if (dig == num2) // 12==13
        {
            printf("Yes");
            break;
        }
        num1 = num1 / 10; // num1=0
    }
    if (num1 == 0)
        printf("No");
    return 0;
}
