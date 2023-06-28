#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);

    if (a <= 200) {
        b = a * 0.5;
        printf("Rs.%d\n", b);
    } else if (a <= 400) {
        b = a * 0.65 + 100;
        printf("Rs.%d\n", b);
    } else if (a <= 600) {
        b = a * 0.80 + 200;
        printf("Rs.%d\n", b);
    } else {
        b = a * 1.25 + 425;
        printf("Rs.%d\n", b);
    }

    return 0;
}
