#include <stdio.h>

typedef struct
{
    int a[2];
    double d;
} struct_t;

double fun(int i)
{
    volatile struct_t s;
    s.d = 3.14;
    s.a[i] = 1073741824; // Possibly out of bounds
    return s.d;
}

int main()
{
    printf("%.10lf\n", fun(0));
    printf("%.10lf\n", fun(1));
    printf("%.10lf\n", fun(2));
    printf("%.10lf\n", fun(3));
    printf("%.10lf\n", fun(4));
    printf("%.10lf\n", fun(5));
    printf("%.10lf\n", fun(6));

    return 0;
}
