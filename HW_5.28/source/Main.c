#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char toggleCase(char ch) {
    if (islower(ch)) {
        return toupper(ch);
    }
    else if (isupper(ch)) {
        return tolower(ch);
    }
    return ch; 
}

int main(void) {
    char input;

    printf("請輸入一個英文字母: ");
    if (scanf(" %c", &input) == 1) {
        char output = toggleCase(input);
        printf("Original: %c, Changed: %c\n", input, output);
    }

    return 0;
}