#include <stdio.h>

struct Polynomial
{
    int coef;
    int expon;
};

struct Polynomial* add(struct Polynomial poly1, struct Polynomial poly2)
{

}
int main()
{
    int maxsize1, maxsize2, sum_size, product_size;
    int i, j, k;

    scanf("%d", &maxsize1);
    struct Polynomial poly1[maxsize1];
    for (i=0; i<maxsize1; i++)
    {
        scanf("%d", &poly1[i].coef);
        scanf("%d", &poly1[i].expon);
    }

    scanf("%d", &maxsize2);
    struct Polynomial poly2[maxsize2];
    for (i=0; i<maxsize2; i++)
    {
        scanf("%d", &poly2[i].coef);
        scanf("%d", &poly2[i].expon);
    }

    sum_size = maxsize1 + maxsize2;
    product_size = maxsize1 * maxsize2;
    struct Polynomial sum[sum_size];
    struct Polynomial product[product_size];

    i = j = k = 0;
    while (i<maxsize1 && j<maxsize2)
    {
        if (poly1[i].expon == poly2[j].expon)
        {
            sum[k].coef = poly1[i].coef + poly2[j].coef;
            sum[k].expon = poly1.expon;
            i++; j++; k++;
        }
        else if (poly1[i].expon > poly2[j].expon)
        {
            sum[k].coef = poly1[i].coef;
            sum[k].expon = poly1[i].expon;
            i++; k++;
        }
        else
        {
            sum[k].coef = poly2[j].coef;
            sum[k].expon = poly2[j].expon;
            j++; k++;
        }
    }
    while (i < maxsize1)
    {
        sum[k].coef = poly1[i].coef;
        sum[k].expon = poly1[i].expon;
        i++; k++;
    }
    while (j < maxsize2)
    {
        sum[k].coef = poly2[j].coef;
        sum[k].expon = poly2[j].expon;
        j++; k++;
    }

    for (i=0; i<=k; i++)
    {
        printf("%d %d ", sum[i].coef, sum[i].expon);
    }

    struct Polynomial temp[maxsize1];
    int product_last = -1;
    k = 0;
    for (i=0; i<maxsize2; i++)
    {
        for (j=0; j<maxsize1; j++)
        {
            temp[j].coef = poly2[i] * poly1[j];
        }
        while (k<product_last && )
        product[k] = 
    }
}
