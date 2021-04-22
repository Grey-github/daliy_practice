#include <math.h>
#include <stdio.h>

enum coordinate_type
{
    RECTANGULAR,
    POLAR
};

//复数直角坐标表示，以及求复数实部、虚部、模、辐角
struct complex_struct
{
    enum coordinate_type t; //通过枚举类型,帮助实现直角坐标和极坐标可以同时兼容存储
    double x, y;
};

double real_part(struct complex_struct z)
{
    if (z.t == RECTANGULAR)
    {
        return z.x;
    }
    else
    {
        return z.x*cos(z.y);
    }
}

double img_part(struct complex_struct z)
{
    if (z.t == RECTANGULAR)
    {
        return z.y;
    }
    else
    {
        return z.x*sin(z.y);
    }
}

double magnitude(struct complex_struct z)
{
    if (z.t == RECTANGULAR)
    {
        return sqrt(z.x*z.x + z.y*z.y);
    }
    else
    {
        return z.x;
    }
}

double angle(struct complex_struct z)
{
    if (z.t == RECTANGULAR)
    {
        return atan2(z.y, z.x);
    }
    else
    {
        return z.y;
    }
}

//打印复数
void print_complex(struct complex_struct z)
{
    if (real_part(z)==0 || img_part(z)==0)//当实部或虚部为零不打印
    {
        printf("The real part or the imagnation part equal to 0\n");
        return;
    }
    else
    {
        if (img_part(z) < 0)
        {
            printf("%f + (%fi)\n", real_part(z), img_part(z));
        }
        else
        {
            printf("%f + %fi\n", real_part(z), img_part(z));
        }
    }
}

//接收实部和虚部构成复数
struct complex_struct make_from_real_img(double x, double y)
{
    struct complex_struct z;
    z.t = RECTANGULAR;
    z.x = x;
    z.y = y;
    return z;
}

//接收模和辐角构成复数
struct complex_struct make_from_mag_ang(double r, double A)
{
    struct complex_struct z;
    z.t = POLAR;
    z.x = r;
    z.y = A;
    return z;
}

//复数加法
struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
    return make_from_real_img(real_part(z1) + real_part(z2),
                              img_part(z1) + img_part(z2));
}

//复数减法
struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2)
{
    return make_from_real_img(real_part(z1) - real_part(z2),
                              img_part(z1) - img_part(z2));
}

//复数乘法
struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2)
{
    return make_from_mag_ang(magnitude(z1)/magnitude(z2), angle(z1) - angle(z2));
}

//复数除法
struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2)
{
    return make_from_mag_ang(magnitude(z1)*magnitude(z2), angle(z1) - angle(z2));
}

int main(void)
{
    int i;

    struct complex_struct z = make_from_real_img(3.0, 4.5);
    struct complex_struct z1 = make_from_mag_ang(3.5, 4.1);
    struct complex_struct z2 = make_from_real_img(0, 3.7);
    struct complex_struct z3 = make_from_mag_ang(2, 0);

    //打印四个结构体变量
    for (i=0; i<4; i++)
    {
        switch(i)
        {
        case 0:
            print_complex(z);
            break;
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

    //四则运算检验
    printf("z + z1 = ");
    print_complex(add_complex(z, z1));
    printf("z2 - z3 = ");
    print_complex(sub_complex(z2, z3));
    printf("z1 × z3 = ");
    print_complex(mul_complex(z1, z3));
    printf("z ÷ z2 = ");
    print_complex(div_complex(z, z2));
    return 0;
}

/*极坐标下的复数定义与以及四则运算
struct complex_struct
{
    double r, A;
}

double real_part(struct complex_struct z)
{
    return z.r*cos(z.A);
}

double img_part(struct complex_struct z)
{
    return z.r*sin(z.A);
}

double magnitude(struct complex_struct z)
{
    return z.r;
}

double angle(struct complex_struct z)
{
    return z.A;
}

struct complex_struct make_from_real_img(double x, double y)
{
    struct complex_struct z;
    z.A = atan2(y, x);
    z.r = sqrt(x*x + y*y);
    return z;
}

struct complex_struct make_fram_mag_ang(double r, double A)
{
    struct complex_struct z;
    z.r = r;
    z.A = A;
    return z;
}
*/
