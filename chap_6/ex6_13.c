//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <math.h>

int main() {
    int arr[8];
    int i = 0;
    for (i = 0; i < 8; ++i) {
        arr[i] = (int) pow(2, i+1);
    }
    i = 0;
    do {
        printf("%d ", arr[i]);
        i++;
    } while (i < 8);
    return 0;
}

