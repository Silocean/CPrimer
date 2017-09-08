//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
#include <string.h>
int main() {
    printf("Please enter your name:\n");
    char name[20];
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    int len = strlen(name);
    len += 3;
    printf("\"%*s\"\n", len, name);
    return 0;
}

