#include <stdio.h>
#include <math.h>

#define N 30

double func_y(double);

int main()
{
    double y[N + 1];
    double xa = 0.0, xb = 3.0;
    double z = 0.0, h = 0.0, x, s;
    int i;

    h = (xb - xa) / (double)N;

    for (i = 0; i <= N; i++)
    {
        x = xa + h * (double)i;
        y[i] = func_y(x);
    }

    for (i = 1; i < N; i++)
    {
        z += 2.0 * y[i];
    }
    s = (h / 2.0) * (y[0] + z + y[N]);

    printf("ANS = %8.4lf\n", s);

    return 0;
}

double func_y(double x)
{
    return pow(x, 4.0) + 2.0 * x;
}
