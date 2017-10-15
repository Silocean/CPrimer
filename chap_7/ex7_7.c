//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

#define basicSalary 10.0

int main() {
    printf("please input your hours of a week: ");
    double hour;
    scanf("%lf", &hour);
    if (hour > 40) {
        hour *= 1.5;
    }
    double totalSalary = hour * basicSalary;
    double tax = 0;
    if (totalSalary > 300 && totalSalary <= 450) {
        tax += 300 * 0.15 + (totalSalary - 300) * 0.2;
    } else if (totalSalary > 450) {
        tax += 300 * 0.15 + 150 * 0.2 + (totalSalary - 450) * 0.25;
    }
    double netIncome = totalSalary - tax;
    printf("totalSalary:%lf\n tax:%lf\n netIncome:%lf", totalSalary, tax, netIncome);
    return 0;
}

