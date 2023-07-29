#include <stdio.h>

int main() {
    int month, roomRent, numDays;
    int hotelTariff; // Change the data type to int
    scanf("%d %d %d", &month, &roomRent, &numDays);
    if (month >= 1 && month <= 12) {
        if (month >= 4 && month <= 6 || month == 11 || month == 12) {
            hotelTariff = roomRent * numDays * 1.2;
        } else {
            hotelTariff = roomRent * numDays;
        }
        printf("%d", hotelTariff); // Print as an integer
    } else {
        printf("Invalid Input");
    }

    return 0;
}
