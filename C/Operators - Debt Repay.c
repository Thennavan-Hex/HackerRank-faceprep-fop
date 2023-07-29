#include <stdio.h>
int main()
{
    float amount, interestRate, years;
    scanf("%f %f %f", &amount, &interestRate, &years);
    float in = (amount * interestRate * years) / 100;
    printf("%.2f\n", in);
    float to = amount + in;
    printf("%.2f\n", to);
    float dis = (in * 2) / 100;
    printf("%.2f\n", dis);
    float sum = to - dis;
    printf("%.2f", sum);
    return 0;
}
