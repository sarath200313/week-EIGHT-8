#include <stdio.h>
void charprin(char* p)
{
    while (*p != '\0')
    {
        printf("%c\n", *p);
        p++;
    }
}
int main()
{
    char a[] = "This world is my playground";
    char* p = a;
    charprin(p);
}
