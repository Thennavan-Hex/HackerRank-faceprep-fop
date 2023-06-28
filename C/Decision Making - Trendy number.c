#include <stdio.h>
#include <math.h>

int middleDigit(int n)
{
    int digits = (int)log10(n) + 1;

    n = (int)(n / pow(10, digits / 2)) % 10;

    return n;
}

int main()
{
    int N;
    scanf("%d",&N);
    int middle = middleDigit(N);

    if (middle % 3 == 0) {
        printf("Trendy Number");
    } else {
        printf("Not a Trendy Number");
    }

    return 0;
}
