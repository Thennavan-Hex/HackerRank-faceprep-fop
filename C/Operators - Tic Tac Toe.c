#include <stdio.h>

int main() {
    int position;
    scanf("%d", &position);

    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    printf("%d %d", row, col);

    return 0;
}
