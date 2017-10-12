//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    int number = 5;
    int week = 1;
    while (number <= 150) {
        number -= week;
        number *= 2;
        week++;
        printf("%d\n", number);
    }
    return 0;
}

