#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long power(int base, int exponent) {
    if (exponent <= 1) {
        return base;
    }
    return base * power(base, exponent - 1);
}

int main(void) {
    int base, exponent;

    printf("叫块┏计籔计 : ");
    if (scanf("%d %d", &base, &exponent) == 2) {
        if (exponent >= 1) {
            printf("%d^%d = %ld\n", base, exponent, power(base, exponent));
        }
        else {
            printf("计ゲ斗单 1\n");
        }
    }

    return 0;
}