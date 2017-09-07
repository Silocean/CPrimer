//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

void smile() {
    printf("Smile!");
}

int main() {
    int i = 0;
    for (i = 0; i < 3; ++i) {
        smile();
    }
    printf("\n");
    for (i = 0; i < 2; ++i) {
        smile();
    }
    printf("\n");
    smile();
}

