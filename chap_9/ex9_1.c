//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

double min(double x, double y);

double min(double x, double y) {
    return x < y ? x : y;
}

int main() {
    printf("%lf", min(4, 5));
    return 0;
}

