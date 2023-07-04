#include <stdio.h>

int main() {
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    scanf("%d", &n);
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("%d", nextTerm);

    return 0;
}
