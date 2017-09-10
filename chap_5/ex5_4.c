//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int flag = 1;
    while (flag) {
        float height;
        printf("Enter a height in centimeters: ");
        scanf("%f", &height);
        if (height <= 0) {
            printf("bye");
            flag = 0;
        } else {
            printf("%.1f cm = %d feet, %.1f inches\n", height, (int) (height / 30.48),
                   (height / 30.48 - ((int) (height / 30.48))) * 12);
        }
    }
    return 0;
}


