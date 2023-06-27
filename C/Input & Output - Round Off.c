#include <stdio.h>
#include <math.h>

int main() {
    float number;
    scanf("%f", &number);
    int one = number;
    float roundup = ceil(number);
    float rounddown = floor(number);
    printf("%d\n",one);
    printf("%.f\n", roundup);
    printf("%.f\n", rounddown);

    return 0;
}