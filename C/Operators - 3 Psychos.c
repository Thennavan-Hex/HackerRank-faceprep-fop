#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x_mid, y_mid;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    x_mid = (x1 + x2) / 2;
    y_mid = (y1 + y2) / 2;
    printf("Arun's house is located at(%.1f,%.1f)", x_mid, y_mid);
    return 0;
}