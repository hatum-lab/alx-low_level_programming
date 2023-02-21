#include "main.h"
#include "0-putchar.c"
/**
*main - program that prints _putchar followed by a new line
* Return: (0)success
*/
int main(void) {
    char c = '_';
    write(STDOUT_FILENO, &c, 1);
    c = 'p';
    write(STDOUT_FILENO, &c, 1);
    c = 'u';
    write(STDOUT_FILENO, &c, 1);
    c = 't';
    write(STDOUT_FILENO, &c, 1);
    c = 'c';
    write(STDOUT_FILENO, &c, 1);
    c = 'h';
    write(STDOUT_FILENO, &c, 1);
    c = 'a';
    write(STDOUT_FILENO, &c, 1);
    c = 'r';
    write(STDOUT_FILENO, &c, 1);
    c = '\n';
    write(STDOUT_FILENO, &c, 1);
    return 0;
}

