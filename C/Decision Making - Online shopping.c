#include <stdio.h>

int main() {
    int prices[10];
    int discounts[10];
    int shippings[10];
    int final_prices[10];
    int lowest_price;
    int i;
    char str[3][30] = {"Flipkart", "Snapdeal", "Amazon"};

    for (i = 0; i < 3; i++) {
        scanf("%d", &prices[i]);
        scanf("%d", &discounts[i]);
        scanf("%d", &shippings[i]);
    }
    for (i = 0; i < 3; i++) {
        final_prices[i] = prices[i] - (prices[i] * discounts[i] / 100) + shippings[i];
    }

    for (i = 0; i < 3; i++) {
        printf("In %s: Rs.%d\n",str[i],  final_prices[i]);
    }

    lowest_price = final_prices[0];
    for (i = 1; i < 3; i++) {
        if (final_prices[i] < lowest_price) {
            lowest_price = final_prices[i];
        }
    }

    for (i = 0; i < 3; i++) {
        if (lowest_price == final_prices[i]) {
            printf("Choose %s\n",str[i]);
            break;
        }
    }

    return 0;
}
