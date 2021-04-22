#include <stdio.h>
#include <stdlib.h>
int main()
{
    float s;
    srand((int)time(0));
    s = (double)rand() / RAND_MAX;
    s = 3 + (5-3) * s;
    printf("%f\n", s);
    printf("%d\n", RAND_MAX);
}
