#include <stdio.h>
void charswap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char a = 'a';
    char b = 'b';
    charswap(&a, &b);
    printf("%c %c\n", a, b);
}
