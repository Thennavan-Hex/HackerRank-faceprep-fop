#include <stdio.h>

int main()
{
    int a, b, i;

    printf("Enter n\n");
    scanf("%d", &a);

    printf("Enter m\n");
    scanf("%d", &b);

    printf("The multiplication table of %d is\n", a);

    for (i = 1; i <=b; i++)
    {
        int c = i * a;
        printf("%d*%d=%d\n", i, a, c);
    }

    return 0;
}
