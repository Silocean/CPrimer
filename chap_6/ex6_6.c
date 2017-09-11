//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    for (i = a; i <= b; ++i) {
        printf("%d, %d, %d\n", i, i * i, i * i * i);
    }
    return 0;
}

