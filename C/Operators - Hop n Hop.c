#include <stdio.h>
#include <stdlib.h>

int main() {
    int peterX = 3, peterY = 4; 
    int friendX, friendY; 

    scanf("%d %d", &friendX, &friendY);

    int distanceX = abs(friendX - peterX);
    int distanceY = abs(friendY - peterY);

    int numHops = distanceX > distanceY ? distanceX : distanceY;

    printf("%d\n", numHops);

    return 0;
}
