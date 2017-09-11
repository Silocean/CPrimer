//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    float a, b;
    while (scanf("%f", &a) && scanf("%f", &b)) {
        printf("%f\n", (a - b) / (a * b));
    }
    return 0;
}

