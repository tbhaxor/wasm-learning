#include <calculations/main.h>

int add_z(int x, int y)
{
    return x + y;
}

int mul_z(int x, int y)
{
    return x * y;
}

int div_z(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    return x / y;
}

int sub_z(int x, int y)
{
    return x - y;
}
