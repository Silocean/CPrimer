//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

void fun(double *a, double *b, double *c) {
    double tmp;
    if (*a > *b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    if (*b > *c) {
        tmp = *b;
        *b = *c;
        *c = tmp;
        if (*a > *b) {
            tmp = *a;
            *a = *b;
            *b = tmp;
        }
    }
}

int main() {
    double a = 5, b = 4, c = 3;
    fun(&a, &b, &c);
    printf("%lf %lf %lf", a, b, c);
    return 0;
}

