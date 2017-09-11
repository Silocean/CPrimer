//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int arr[8];
    int i = 0;
    while (i < 8) {
        scanf("%d", &arr[i]);
        i++;
    }
    int j;
    for (j = 7; j >= 0; --j) {
        printf("%d ", arr[j]);
    }
    return 0;
}

