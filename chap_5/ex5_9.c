//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

const double a = 5.0;
const double b = 9.0;
const double c = 32.0;
const double d = 273.16;

void Temperatures(double temp) {
    double res1 = a / b * (temp - c);
    printf("摄氏温度：%lf\n", res1);
    double res2 = res1 + d;
    printf("开氏温度：%lf\n",res2);
}

int main() {
    double temp;
    while (scanf("%lf", &temp)) {
        Temperatures(temp);
    }
    return 0;
}

