#include <stdio.h>

int main() {
    int number;
    int firstDigit, lastDigit, sum;

    scanf("%d", &number);

    lastDigit = number % 10;
    firstDigit = number / 1000;

    sum = firstDigit + lastDigit;

    printf("%d\n", sum);

    return 0;
}
