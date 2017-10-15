//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    char pre;
    while ((ch = getchar()) != '#') {
        if (pre == 'e' && ch == 'i') {
            count++;
        }
        pre = ch;
    }
    printf("%d", count);
    return 0;
}

