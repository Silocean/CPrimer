//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

void printCube(double n);

void printCube(double n) {
    printf("%lf", n * n * n);
}

int main() {
    double n;
    printf("Enter a double number: ");
    scanf("%lf", &n);
    printCube(n);
    return 0;
}


