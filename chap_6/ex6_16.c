//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    double a = 100;
    double b = 100;
    int year = 0;
    while (a >= b) {
        a += 10;
        b += b * 0.05;
        year++;
    }
    printf("year: %d\n", year);
    printf("Daphne: %lf, Deirdre: %lf", a, b);
    return 0;
}

