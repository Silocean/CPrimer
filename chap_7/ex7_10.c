//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

#define SINGLE 17850
#define HOST 23900
#define MARRIED 29750
#define DIVORCE 14875

void cal(double income, double class);

int main() {
    while (1) {
        printf("********************************************\n");
        printf("1)single    2)host    3)married    4)divorce\n");
        printf("********************************************\n");
        printf("please select your category: ");
        int category;
        scanf("%d", &category);
        printf("please input your income: ");
        double income;
        scanf("%lf", &income);
        double tax = 0;
        switch (category) {
            case 1:
                cal(income, SINGLE);
                break;
            case 2:
                cal(income, HOST);
                break;
            case 3:
                cal(income, MARRIED);
                break;
            case 4:
                cal(income, DIVORCE);
                break;
            default:
                break;
        }
    }
    return 0;
}

void cal(double income, double class) {
    double tax;
    if (income <= class) {
        tax = income * 0.15;
    } else {
        tax = class * 0.15 + (income - class) * 0.28;
    }
    printf("your tax is: %lf \n", tax);
}
