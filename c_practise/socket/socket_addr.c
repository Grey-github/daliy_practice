#include <bits/socket.h>

struct socketaddr // define socket address
{
    sa_family_t sa_family;
    char sa_data[14];
}
