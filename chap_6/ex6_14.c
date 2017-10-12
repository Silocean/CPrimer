//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

#define LEN 8

int main() {
    double a[LEN] = {0, 0, 0, 0, 0, 0, 0, 0};
    double b[LEN] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i, j;
    for (i = 0; i < LEN; i++) {
        scanf("%lf", &a[i]);
        for (j = 0; j <= i; j++) {
            b[i] += a[j];
        }
    }
    for (i = 0; i < LEN; i++) {
        printf("%lf ", a[i]);
    }
    printf("\n");
    for (j = 0; j < LEN; ++j) {
        printf("%lf ", b[j]);
    }
    return 0;
}

