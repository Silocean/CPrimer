//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                count++;
                break;
            case '!':
                count++;
                break;
            default:
                break;
        }
    }
    printf("%d", count);
    return 0;
}

