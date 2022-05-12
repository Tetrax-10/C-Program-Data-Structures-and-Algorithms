#include<stdio.h> 
int main() {
    int num1, num2, i, j;
    scanf("%d %d", &num1, &num2);

    for (i = num1;i <= num2;i++) {
        int sum = 0, sum1 = 0;
        for (j = 1;j <= i / 2;j++) {
            if (i % j == 0)
                sum += j;
        }

        if (sum <= i) {
            continue;
        }

        for (j = 1;j <= sum / 2;j++) {
            if (sum % j == 0)
                sum1 += j;
        }
        if (sum1 == i) {
            printf("%d %d\n", i, sum);
        }
    }
}