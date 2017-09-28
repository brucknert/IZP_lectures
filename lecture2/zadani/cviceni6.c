/**
    Zadani:
        Doplnte funkci uppercase, aby program vytisknul sestkrat Good job!

        Zdrojovy kod prekladejte s parametry -pedantic -Wextra -Wall -std=c99 (viz prvni cviceni).
**/
#include <stdio.h>

void test_characters(char result, char expected);

/**
*   Converts single character to uppercase.
*
*   @param c character to be uppercased
*   @return uppercased character or -1 if the character is not alphabet letter.
**/
char uppercase(char c);

int main() {
    test_characters(uppercase('A'), 'A');
    test_characters(uppercase('a'), 'A');
    test_characters(uppercase('z'), 'Z');
    test_characters(uppercase('/'), -1);
    test_characters(uppercase('\\'), -1);
    test_characters(uppercase('\n'), -1);

    return 0;
}

void test_characters(char result, char expected) {
    if (result == expected) {
        printf("Good job!\n");
    } else {
        printf("Keep trying!\n");
    }
}