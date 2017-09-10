//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int days;
    printf("Please input days:\n");
    scanf("%d", &days);
    printf("%d days are %d weeks, %d days.", days, days / 7, days % 7);
    return 0;
}

