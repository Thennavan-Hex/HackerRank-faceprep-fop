#include <stdio.h>
int main() {
    int n, m, i;
    int arr1[100], arr2[100];
    int sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        sum1 += arr1[i];
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
        sum2 += arr2[i];
    }
    if (n == m && sum1 == sum2) {
        printf("Same");
    } else {
        printf("Not Same");
    }
    return 0;
}
