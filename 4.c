#include <stdio.h>
void input(int *small,int *medium, int *large)
{
    printf("Enter");
    scanf("%d %d %d", small, medium, large);
    
    if (*small > *medium)
    {
        int temp = *small;
        *small = *medium;
        *medium = temp;
    }
    if (*medium > *large)
    {
        int temp = *medium;
        *medium = *large;
        *large = temp;
    }
    if (*small > *medium)
    {
        int temp = *small;
        *small = *medium;
        *medium = temp;
    }

}
int main()
{
    int small, medium, large;
    input(&small, &medium, &large);
    printf("%d %d %d\n", small, medium, large);
    return 0;
}
