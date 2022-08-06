#include <stdio.h>
int main()
{
    char a[] = "This world is my playground";
    char* p = a;
    for(int i = 0; i < sizeof(a); i++)
    {
        printf("%c\n", *(p + i));
    }
    return 0;
}
