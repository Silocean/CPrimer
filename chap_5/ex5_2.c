//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int end = n + 10;
    while (n <= end) {
        printf("%d ", n++);
    }
    return 0;
}

