#include <stdio.h>

int main()
{
    int year, arrears, age, income;
    float test, att, ptest, patt;

    scanf("%d", &age);
    scanf("%d", &year);
    scanf("%d", &income);
    scanf("%d", &arrears);
    scanf("%f", &test);
    scanf("%f", &att);

    ptest = test * 100;
    patt = att * 100;
    
    if (age >= 18 && age < 21 && year >= 2021 && arrears <= 2 && income <= 200000 && ptest >= 60 && patt >= 80)
    {
        printf("Eligible");
    }
    else if (age >= 18 && age < 21 && year >= 2021 && arrears > 2 && income > 200000 && income < 250000 && ptest > 80 && patt > 90)
    {
        printf("Partially Eligible");
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}
