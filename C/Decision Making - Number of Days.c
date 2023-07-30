#include "stdio.h"

int main() {
    int y, m;
    scanf("%d %d", &y, &m);

    if (y >= 1900 && y <= 9999) {
        int days;
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            switch (m) {
                case 1: days = 31; break;
                case 2: days = 29; break;
                case 3: days = 31; break;
                case 4: days = 30; break;
                case 5: days = 31; break;
                case 6: days = 30; break;
                case 7: days = 31; break;
                case 8: days = 31; break;
                case 9: days = 30; break;
                case 10: days = 31; break;
                case 11: days = 30; break;
                case 12: days = 31; break;
                default: days = -1; break;
            }
        } else {
            switch (m) {
                case 1: days = 31; break;
                case 2: days = 28; break;
                case 3: days = 31; break;
                case 4: days = 30; break;
                case 5: days = 31; break;
                case 6: days = 30; break;
                case 7: days = 31; break;
                case 8: days = 31; break;
                case 9: days = 30; break;
                case 10: days = 31; break;
                case 11: days = 30; break;
                case 12: days = 31; break;
                default: days = -1; break;
            }
        }

        if (days != -1) {
            printf("%d Days", days);
        } else {
            printf("0");
        }
    } else {
        printf("0");
    }

    return 0;
}
