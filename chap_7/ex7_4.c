//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#') {
        if (ch == '.' || ch == '!') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

