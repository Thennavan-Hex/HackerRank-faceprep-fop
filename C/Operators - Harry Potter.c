#include <stdio.h>
#include <stdlib.h>

int main()
{
    int doorNumber, firstDigit, lastDigit, sum;
    scanf("%d", &doorNumber);
    doorNumber = abs(doorNumber);
    lastDigit = doorNumber % 10;
    firstDigit = doorNumber / 1000;
    sum = firstDigit + lastDigit;
    printf("%d", sum);

    return 0;
}
