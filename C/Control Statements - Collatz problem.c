#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        count++;
        printf("%d\n", n);
    }
    printf("%d\n", count);
    return 0;
}
