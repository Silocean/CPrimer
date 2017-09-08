//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <string.h>

int main() {
    char firstName[10];
    char lastName[10];
    printf("Please input your firstName:\n");
    scanf("%s", firstName);
    printf("Please input your lastName:\n");
    scanf("%s", lastName);
    printf("%s %s\n", firstName, lastName);
    int lenF = strlen(firstName);
    int lenL = strlen(lastName);
    printf("%*d %*d\n", lenF, lenF, lenL, lenL);
    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", lenF, lenF, lenL, lenL);
    return 0;
}

