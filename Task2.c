#include <stdio.h>

float sumFoo(int n) {
    double sum = 0;
    double fact = 1;
    double power = 1;ь
    int i;

    for (i = 1; i <= n; i++) {
        fact *= i;
        power = i * i;
        sum += fact / power;
    }

    return sum;
}

int main() {
    int n;

    printf("введи число n: ");
    scanf("%d", &n);

    float result = sumFoo(n);
    printf("cумма равна %.2f\n", result);

    return 0;
}