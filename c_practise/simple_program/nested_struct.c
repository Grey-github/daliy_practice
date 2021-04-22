//此文件无法通过编译，仅供记录书中内容
struct segment
{
    struct complex_struct start;
    struct complex_struct end;
}

struct segment s = {{1.0, 2.0}, {4.0, 6.0}};

struct segment s = {1.0, 2.0, 4.0, 6.0};

//C99新特性：Memberwise Initialization
struct segment s = { .start.x = 1.0, .end.x = 2.0};

s.start.t = RECTANGULAR;
s.start.a = 1.0;
s.start.b = 2.0;
