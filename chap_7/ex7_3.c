//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    char ch;
    int even = 0;
    double sumOfEven = 0;
    int odd = 0;
    double sumOfOdd = 0;
    while ((ch = getchar()) != '0') {
        int number = ch - '0';
        if (number % 2 == 0) {
            sumOfEven += number;
            even++;
        } else {
            sumOfOdd += number;
            odd++;
        }
    }
    printf("even:%d\naverageOfEven:%lf\nodd:%d\naverageOfOdd:%lf", even, sumOfEven / even, odd, sumOfOdd / odd);
    return 0;
}

