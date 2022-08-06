#include <stdio.h>#include <stdio.h>
int main()
{
    int F[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
    {
        printf("%p\n", F + i);
    }
    return 0;
}
