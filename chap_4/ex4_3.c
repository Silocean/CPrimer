//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
int main() {
    float x;
    scanf("%f", &x);
    printf("The input is %.1f or %.1e\n", x, x);
    printf("The input is %+.3f or %.3E\n", x, x);
    return 0;
}

