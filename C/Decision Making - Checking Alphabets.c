#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    ch = tolower(ch);

    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
