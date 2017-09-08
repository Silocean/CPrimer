//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

#define MILE 1.609
#define GALLON 3.785

int main() {
    float m, g;
    printf("Please input your miles and gallons:\n");
    scanf("%f %f", &m, &g);
    printf("%f", g * GALLON / m * MILE / 100);
    return 0;
}

