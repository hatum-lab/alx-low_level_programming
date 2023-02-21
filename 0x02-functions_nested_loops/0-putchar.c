#include <_putchar.h>
/**
*main - program that prints _putchar followed by a new line
* Return: (0)success
*/
int main(void)
{
char str[] = ("_putchar\n");
int i = 0;
while (str[i] != '\0')
{
char c = str[i];

_putchar (c);
i++;
}
return (0);
}
