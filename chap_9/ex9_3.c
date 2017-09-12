//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

void chline(char ch, int i, int j);

void chline(char ch, int i, int j) {
    int m, n;
    for (m = 0; m < j; ++m) {
        for (n = 0; n < i; ++n) {
            putchar(ch);
        }
        putchar('\n');
    }
}

int main() {
    chline('z', 3, 5);
    return 0;
}

