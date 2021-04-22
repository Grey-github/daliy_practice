#include <stdio.h>

int GCD(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }
    else
    {
        return GCD(b, a%b);
    }
}

struct rational
{
    int numerator;
    int denominator;
};

int ra_numerator(struct rational num)
{
    return num.numerator;
}

int ra_denominator(struct rational num)
{
    return num.denominator;
}
struct rational make_rational(int numerator, int denominator)
{
    struct rational num;
    num.numerator = numerator;
    num.denominator = denominator;
    return num;
}

void print_rational(struct rational num)
{
    printf("%d/%d\n",
           ra_numerator(num), ra_denominator(num));
}

struct rational add_rational(struct rational num1, struct rational num2)
{
    struct rational num;
    if (ra_denominator(num1) == ra_denominator(num2))
    {
        num.denominator = num1.denominator;
        num.numerator = num1.numerator + num2.numerator;
    }
    else
    {
        num.numerator = num1.denominator*num2.numerator + num1.numerator*num2.denominator;
        num.denominator = num1.denominator*num2.denominator;
        double divisor = GCD(num.numerator, num.denominator);
        num.numerator = num.numerator/divisor;
        num.denominator = num.denominator/divisor;
    }
    return num;
}

struct rational sub_rational(struct rational num1, struct rational num2)
{
    struct rational num;
    if (ra_denominator(num1) == ra_denominator(num2))
    {
        num.numerator = num1.numerator - num2.numerator;
    }
    else
    {
        num.numerator = num1.denominator*num2.numerator - num1.numerator*num2.denominator;
        num.denominator = num1.denominator*num2.denominator;
        double divisor = GCD(num.numerator, num.denominator);
        num.numerator = num.numerator/divisor;
        num.denominator = num.denominator/divisor;
    }
    return num;
}

struct rational mul_rational(struct rational num1, struct rational num2)
{
    struct rational num;
    num.numerator = num1.numerator*num2.numerator;
    num.denominator = num1.denominator*num2.denominator;

    double divisor = GCD(num.numerator, num.denominator);
    num.numerator = num.numerator/divisor;
    num.denominator = num.denominator/divisor;

    return num;
}

struct rational div_rational(struct rational num1, struct rational num2)
{
    struct rational num;
    num.numerator = num1.numerator*num2.denominator;
    num.denominator = num1.denominator*num2.numerator;

    double divisor = GCD(num.numerator, num.denominator);
    num.numerator = num.numerator/divisor;
    num.denominator = num.denominator/divisor;

    return num;
}
int main(void)
{
    struct rational a = make_rational(1, 8); //a=1/8
    struct rational b = make_rational(-1, 8); //b=-1/8
    print_rational(add_rational(a, b));
    print_rational(sub_rational(a, b));
    print_rational(mul_rational(a, b));
    print_rational(div_rational(a, b));

    return 0;
}
