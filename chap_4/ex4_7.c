//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <string.h>
#include <float.h>

int main() {
    double a = 1.0 / 3.0;
    printf("%.*f\n", FLT_DIG, a);
    printf("%.12f\n", a);
    printf("%.*f", DBL_DIG + 1, a);
    return 0;
}

