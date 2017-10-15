//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

#define A 8.75
#define B 9.33
#define C 10.00
#define D 11.20

void showMenu();

int main() {
    char ch;
    showMenu();
    while ((ch = getchar()) != '5') {
        int num = ch - '0';
        switch (num) {
            case 1:
                printf("please input your hours: ");
                int a;
                scanf("%d", &a);
                printf("%lf", a * A);
                showMenu();
                break;
            case 2:
                printf("please input your hours: ");
                int b;
                scanf("%d", &b);
                printf("%lf\n", b * B);
                showMenu();
                break;
            case 3:
                printf("please input your hours: ");
                int c;
                scanf("%d", &c);
                printf("%lf\n", c * C);
                showMenu();
                break;
            case 4:
                printf("please input your hours: ");
                int d;
                scanf("%d", &d);
                printf("%lf\n", d * D);
                showMenu();
                break;
            default:
                printf("your input number must be in [1, 4], please input again:\n");
                showMenu();
                break;
        }
    }

    return 0;

}


void showMenu() {
    char ch = ' ';
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) %.2lf/hr%-20c2)%.2lf/hr\n", A, ch, B);
    printf("3) %.2lf/hr%-19c4)%.2lf/hr\n", C, ch, D);
    printf("5) quit\n");
    printf("*****************************************************************\n");
}