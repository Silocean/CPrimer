//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

float cal(float a, float b) {
    return (a - b) / (a * b);
}

int main() {
    float a, b;
    while (scanf("%f", &a) && scanf("%f", &b)) {
        printf("%f\n", cal(a, b));
    }
    return 0;
}

