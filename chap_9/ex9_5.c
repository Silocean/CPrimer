//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

void larger_of(double x, double y) {
    double tmp = x > y ? x : y;
    x = tmp;
    y = tmp;
}

int main() {
    larger_of(4, 5);
    return 0;
}

