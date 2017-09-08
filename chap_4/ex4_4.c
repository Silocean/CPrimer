//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>
int main() {
    printf("Please input your name and your height:\n");
    char name[20];
    float height;
    scanf("%s %f", name, &height);
    printf("%s, you are %.3f feet tall", name, height);
    return 0;
}

