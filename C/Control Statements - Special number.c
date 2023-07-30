#include "stdio.h"

int main() {
    int m, n, i, s = 0, p = 1;
    scanf("%d %d", &m, &n);
    int d;
    for (i = m; i <= n; i++) {
        int num = i;
        p = 1;
        s = 0;
        while (num != 0) {
            d = num % 10;
            s += d;
            p *= d;
            num /= 10;
        }
        if (s + p == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
