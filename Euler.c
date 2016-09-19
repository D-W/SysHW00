#include <stdio.h>
#include <stdlib.h>

void problem1() {
    int i1;
    int ans1 = 0;
    for (i1 = 0; i1 < 1000; i1++) {
        if ((i1 % 3 == 0) || (i1 % 5 == 0)) {
            ans1 += i1;
        }
    }
    printf("Answer to Problem 1: %d\n", ans1);
}

void problem2() {
    int a2 = 1;
    int b2 = 1;
    int c2 = 1;
    int ans2 = 0;
    while (c2 <= 4000000) {
        if (c2 % 2 == 0) {
            ans2 += c2;
        }
        c2 = a2 + b2;
        a2 = b2;
        b2 = c2;
    }
    printf("Answer to Problem 2: %d\n", ans2);
}


int main() {
    
    //Problem 1
    problem1();
    
    //Problem 2
    problem2();
    
}