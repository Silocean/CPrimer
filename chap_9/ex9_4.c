//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

double cal(double a, double b) {
    return 1.0 / ((1.0 / a + 1.0 / b) / 2);
}

int main() {
    printf("%lf", cal(3, 5));
    return 0;
}

