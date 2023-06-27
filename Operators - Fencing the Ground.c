#include <stdio.h>

int main() {
    int width, length;
    int tlength, area;

    scanf("%d", &width);

    scanf("%d", &length);

    tlength = 2 * (length + width);
    area = length * width;

    printf("The required length is %d m\n", tlength);
    printf("The required area of carpet is %d sqm\n", area);

    return 0;
}
