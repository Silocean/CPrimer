//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int flag = 1;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    int b, a;
    scanf("%d", &b);
    printf("Now enter the first operand: ");
    scanf("%d", &a);
    printf("%d %% %d is %d\n", a, b, a % b);
    while (flag) {
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("Done\n");
            flag = 0;
        } else {
            printf("%d %% %d is %d\n", a, b, a % b);
        }
    }
    return 0;
}

