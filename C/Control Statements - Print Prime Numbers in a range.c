#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, isPrime;

    scanf("%d", &a);

    for (i = 2; i <= a; i++)
    {
        isPrime = 1;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
