//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int days;
    scanf("%d", &days);
    int count = 0, sum = 0;
    while (count++ < days) {
        sum += count;
    }
    printf("sum = %d\n", sum);
    return 0;
}


