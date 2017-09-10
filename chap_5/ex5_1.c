//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

const int MINUTES_OF_HOUR = 60;

int main() {
    int minutes;
    scanf("%d", &minutes);
    while (minutes > 0) {
        printf("hour:%d, minute:%d\n", minutes / 60, minutes % 60);
        scanf("%d", &minutes);
    }
    return 0;
}

