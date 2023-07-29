#include <stdio.h>

int main() {
    int f, fd, fs;
    scanf("%d %d %d", &f, &fd, &fs);
    int ft = f - ((f * fd) / 100) + fs;
    int s, sd, ss;
    scanf("%d %d %d", &s, &sd, &ss);
    int st = s - ((s * sd) / 100) + ss;
    int a, ad, as;
    scanf("%d %d %d", &a, &ad, &as);
    int at = a - ((a * ad) / 100) + as;
    printf("In Flipkart: Rs.%d\n", ft);
    printf("In Snapdeal: Rs.%d\n", st);
    printf("In Amazon: Rs.%d\n", at);
    if (ft < st && ft < at) {
        printf("Choose Flipkart\n");
    } else if (st < ft && st < at) {
        printf("Choose Snapdeal\n");
    } else if (at < ft && at < st) {
        printf("Choose Amazon\n");
    } else {
        printf("Choose Flipkart\n");
    }
    return 0;
}
