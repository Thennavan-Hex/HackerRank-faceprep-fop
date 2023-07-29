#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;
    scanf("%d", &num);

    if (isStrongNumber(num)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
