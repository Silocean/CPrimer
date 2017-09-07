//
// Created by Silocean on 2017-09-07.
//

#include <stdio.h>

void one_three() {
    printf("one\n");
    two();
    printf("three\n");
}

void two(){
    printf("two\n");
}

int main() {
    printf("starting now:\n");
    one_three();
    printf("done!");
}

