//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    char arr[255];
    int i = 0;
    while (1) {
        char c;
        scanf("%c", &c);
        if (c == '\n') break;
        arr[i] = c;
        i++;
    }
    int j;
    for (j = 0; j < i; j++) {
        printf("%c ", arr[i - j - 1]);
    }
    return 0;
}

