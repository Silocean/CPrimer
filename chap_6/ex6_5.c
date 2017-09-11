//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    char c;
    scanf("%c", &c);
    int len = c - 'A' + 1;
    int i;
    for (i = 0; i < len; ++i) {
        int k;
        for (k = 0; k < len - i - 1; ++k) {
            printf(" ");
        }

        int m;
        for (m = 0; m <= i; ++m) {
            printf("%c", 'A' + m);
        }
        int n;
        for (n = 0; n < i; ++n) {
            printf("%c", 'A' + i - n - 1);
        }

        /*int z;
        for (z = 0; z < len - i - 1; ++z) {
            printf(" ");
        }*/
        printf("\n");
    }
    return 0;
}

