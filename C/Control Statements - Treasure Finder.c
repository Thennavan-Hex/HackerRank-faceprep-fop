#include <stdio.h>

int main() {
    int num1, num2, num3;
    int smallest, middle, code;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    smallest = (num1 < num2 && num1 < num3) ? num1 : (num2 < num3) ? num2 : num3;
    middle = (num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3) ? num1 : 
             (num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3) ? num2 : num3;

    printf("The treasure is in the box which has the number %d\n", middle);
    code = 1;
    for (int i = 1; i <= smallest; i++) {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
            code = i;
        }
    }
    printf("The code to open the box is %d\n", code);

    return 0;
}
