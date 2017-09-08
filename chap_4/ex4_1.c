//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

int main() {
    char firstName[10];
    char lastName[10];
    printf("Please enter your firstName:\n");
    scanf("%s", firstName);
    printf("Please enter your lastName:\n");
    scanf("%s", lastName);
    printf("%s,%s", firstName, lastName);
    return 0;
}

