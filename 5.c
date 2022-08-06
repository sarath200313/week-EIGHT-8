#include <stdio.h>
void MinMax(double *data, int n, double *min, double *max)
{
    *min = data[0];
    *max = data[0];
    for (int i = 1; i < n; i++)
    {
        if (data[i] < *min)
            *min = data[i];
        if (data[i] > *max)
            *max = data[i];
    }
}
int main()
{
    double data[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &data[i]);
    }
    double min, max;
    MinMax(data, 10, &min, &max);
    printf("%f %f\n", min, max);
    return 0;
}
