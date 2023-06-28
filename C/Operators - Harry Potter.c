#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int firstDigit = number / 1000;
    int lastDigit = number % 10;
    int sum = firstDigit + lastDigit;

    printf("%d",sum);

    return 0;
}
