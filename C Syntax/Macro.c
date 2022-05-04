// Macro

#include <stdio.h>
#define SQUARE(a) a *a

int main()
{
    int num = 5, ans;
    ans = SQUARE(num);
    printf("%d", ans);
}
