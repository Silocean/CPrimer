//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int numberOfSpace = 0;
    int numberOfEnter = 0;
    int nubmerOfOther = 0;
    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            numberOfSpace++;
        } else if (isspace(ch)) {
            numberOfEnter++;
        } else {
            nubmerOfOther++;
        }
    }
    printf("numberOfSpace: %d\nnumberOfEnter: %d\nnumberOfOther: %d", numberOfSpace, numberOfEnter, nubmerOfOther);
    return 0;
}

