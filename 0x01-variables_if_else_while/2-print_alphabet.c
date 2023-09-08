#include <stdio.h>
/**
 * main - A program that prints alphabet in Lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'Z'; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}

