//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    char arr[26];
    char c;
    int i;
    for (i = 0, c = 'a'; c <= 'z'; i++, c++) {
        arr[i] = c;
    }
    int j;
    for (j = 0; j < 26; j++) {
        printf("%c", arr[j]);
    }
    return 0;
}

