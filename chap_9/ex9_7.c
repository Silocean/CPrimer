//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <ctype.h>

const char chs[] = "abcdefghigklmnopqrstuvwxyz";


int fun(char ch) {
    ch = tolower(ch);
    if (isalpha(ch)) {
        return ch - 'a' + 1;
    }
    return -1;
}

int main() {
    char ch;
    while ((ch = getchar()) != EOF) {
        // if (ch == '\n') continue;
        printf("%d,", fun(ch));
    }
    return 0;
}

