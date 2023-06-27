#include <stdio.h>
#include <math.h>

int main() {
    char name[100], grade;
    int age;
    float cgpa;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%f", &cgpa);
    scanf(" %c", &grade);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", floorf(cgpa * 100) / 100);
    printf("Grade: %c\n", grade);

    return 0;
}
