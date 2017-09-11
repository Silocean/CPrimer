//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int i, j;
    int count = 0;
    for (i = 0; i < 6; ++i) {
        for (j = 0; j <= i; ++j) {
            printf("%c", 65 + count);
            count++;
        }
        printf("\n");
    }
    return 0;
}

