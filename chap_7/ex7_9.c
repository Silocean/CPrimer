//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main() {
    int num;
    scanf("%d", &num);
    int i;
    for (i = 2; i <= num; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

int isPrime(int n) {
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}