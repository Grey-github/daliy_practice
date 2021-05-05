#include <iostream>
#include <string>

struct Vector3
{
    float x, y, z;
};

int main()
{
    long offset = (long)&((Vector3*)0)->y; // cast 0 to Vector2 pointer, and get the address of the x, then cast address to long
    std::cout << offset << std::endl;

    return 0;
}