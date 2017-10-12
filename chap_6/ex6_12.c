//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int n;
    while (scanf("%d", &n)) {
        if (n <= 0) break;
        int i = 0, j = 0;
        double res1 = 0;
        for (i = 1; i <= n; ++i) {
            res1 += 1.0 / (double) i;
        }
        double res2 = 0;
        for (j = 1; j <= n; ++j) {
            if (j % 2 == 0) {
                res2 -= 1.0 / (double) j;
            } else {
                res2 += 1.0 / (double) j;
            }
        }
        printf("%lf, %lf\n", res1, res2);
    }
    return 0;
}

