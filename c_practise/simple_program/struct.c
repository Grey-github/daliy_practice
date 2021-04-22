#include <stdio.h>

enum coordinate_type
{
    RECTANGULAR,
    POLAR
};

struct complex_struct
{
    enum coordinate_type t;
    double x, y;
}z;

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2);
struct complex_struct print_complex(struct complex_struct z);

int main(void)
{
    int i;
    double x = 3.0;
    z.x = x;
    z.y = 4.0;

    struct complex_struct z1 = {x, 4.0, }; //z1.x=3.0, z1.y=4.0
    struct complex_struct z2 = {3.0, }; //z2.x=3.0, z2.y=0.0
    struct complex_struct z3 = {0};
    struct complex_struct z4 = { .y = 4.0}; //z1.x=0.0, z1.y=4.0

    z1 = z2;
    struct complex_struct z = { 3.0, 4.0 };
    z = add_complex(z2, z3);
    z = add_complex(z, z);

    for(i=1; i<4; i++)
    {
        switch (i)
        {
        case 1:
            print_complex(z1);
            break;
        case 2:
            print_complex(z2);
            break;
        case 3:
            print_complex(z3);
            break;
        default:
            break;
        }
    }

    if (z.y < 0)
    {
        printf("z=%f%fi\n", z.x, z.y);
    }
    else
    {
        printf("z=%f%fi\n", z.x, z.y);
    }

    return 0;
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
    z1.x = z1.x + z2.x;
    z1.y = z1.y + z2.y;
    return z1;
}

struct complex_struct print_complex(struct complex_struct z)
{
    printf("z.x = %f\tz.y = %f\n", z.x, z.y);
}
