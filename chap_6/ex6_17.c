//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    double total = 100;
    int year = 0;
    while (total > 0) {
        total += total * 0.08;
        total -= 10;
        year++;
    }
    printf("%d\n", year);
    return 0;
}

