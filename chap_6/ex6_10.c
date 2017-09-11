//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int cal(int a, int b) {
    int i;
    int sum = 0;
    for (i = a; i <= b; ++i) {
        sum += i * i;
    }
    return sum;
}

int main() {
    printf("Enter lower and upper integer limits: ");
    int a, b;
    scanf("%d %d", &a, &b);
    while (a < b) {
        printf("The sums of the squares from %d to %d is %d\n", a, b, cal(a, b));
        printf("Enter next set of limits: ");
        scanf("%d %d", &a, &b);
    }
    printf("Done");
    return 0;
}

