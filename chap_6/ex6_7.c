//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <string.h>

int main() {
    char chars[] = "hello world";
    int i;
    for (i = 0; i < strlen(chars); ++i) {
        printf("%c", chars[strlen(chars) - i - 1]);
    }
    return 0;
}

