#include <stdio.h>

int main() {
    int monthNumber, rent, stay, total;
    scanf("%d", &monthNumber);
    scanf("%d", &rent);
    scanf("%d", &stay);
    if (monthNumber >= 1 && monthNumber <= 12) {
        if (monthNumber == 4 || monthNumber == 6 || monthNumber == 11 || monthNumber == 12) {
            int temp = (rent * 20) / 100;
            rent = rent + temp;
            total = rent * stay;
            printf("%d", total);
        } else {
            total = rent * stay;
            printf("%d", total);
        }
    } else {
        printf("Invalid Input");
    }
    return 0;
}
