//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>


int main() {
    int flag = 1;
    double numberOfA = 0, numberOfB = 0, numberOfC = 0;
    while (flag) {
        printf("****************************************\n");
        printf("a)artichoke   b)beet   c)carrot   q)quit\n");
        printf("****************************************\n");
        printf("please input your choose: ");
        char ch = getchar();
        switch (ch) {
            case 'a':
                printf("input your number: ");
                double numberA;
                scanf("%lf", &numberA);
                numberOfA += numberA;
                break;
            case 'b':
                printf("input your number: ");
                double numberB;
                scanf("%lf", &numberB);
                numberOfB += numberB;
                break;
            case 'c':
                printf("input your number: ");
                double numberC;
                scanf("%lf", &numberC);
                numberOfC += numberC;
                break;
            case 'q':
                flag = 0;
                break;
        }
    }
    double price = 0;
    printf("unit price of artichoke: 2.05, unit price of beet: 1.15, unit price of carrot: 1.09\n");
    printf("numberOfA:%lf, numberOfB:%lf, numberOfC:%lf\n", numberOfA, numberOfB, numberOfC);
    price = numberOfA * 2.05 + numberOfB * 1.15 + numberOfC * 1.09;
    double totalNumberOfABC = 0;
    totalNumberOfABC = numberOfA + numberOfB + numberOfC;
    printf("totalNumberOfABC: %lf\n", totalNumberOfABC);
    printf("priceOfOrder: %lf\n", numberOfA * 2.05 + numberOfB * 1.15 + numberOfC * 1.09);
    double freight = 0;
    if (totalNumberOfABC <= 5) {
        freight = 6.5;
    } else if (totalNumberOfABC > 5 && totalNumberOfABC <= 20) {
        freight = 14;
    } else {
        freight = (14 + totalNumberOfABC - 20) * 0.5;
    }
    printf("freight: %lf\n", freight);
    double discount = 0;
    if (price >= 100) {
        discount = price * 0.05;
    }
    printf("discount: %lf\n", discount);
    printf("totalCost: %lf\n", price - discount + freight);
    return 0;
}

