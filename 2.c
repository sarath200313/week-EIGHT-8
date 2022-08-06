#include <stdio.h>
int main()
{
    int x ;
    int* ip = &x;
    scanf("%d", ip);
    *ip = *ip + 1;
    printf("%d\n",x);
    x = x + 1;
    printf("%d\n",x);
    return 0;
}
