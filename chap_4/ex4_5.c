//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    printf("Please input download speed(Mb/s) and your file size(MB):\n");
    float speed, size;
    scanf("%f %f", &speed, &size);
    float res = size * 8 / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds\n", speed, size, res);
    return 0;
}

