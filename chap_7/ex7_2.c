//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    char ch;
    int index = 1;
    while ((ch = getchar()) != '#') {
        printf("%c-%d ", ch, (int) ch);
        if (index % 8 == 0) {
            printf("\n");
        }
        index++;
    }
    return 0;
}

