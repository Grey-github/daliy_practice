#include <stdio.h>

struct nothing
{

};

int main()
{
    // show the pointer size in my computer
    printf("size of int pointer is %d\n", sizeof(int*));
    printf("size of float pointer is %d\n", sizeof(float*));
    printf("size of double pointer is %d\n", sizeof(double*));
    printf("size of char pointer is %d\n", sizeof(char*));
    printf("size of struct pointer is %d\n", sizeof(struct nothing*));
}
