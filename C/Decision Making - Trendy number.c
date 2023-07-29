#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 100 && n <= 999) {
        int middleDigit = (n / 10) % 10;
        if (middleDigit % 3 == 0) {
            printf("Trendy Number");
        } else {
            printf("Not a Trendy Number");
        }
    } else {
        printf("Invalid Number");
    }

    return 0;
}
