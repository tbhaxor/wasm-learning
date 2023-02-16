#include "app.h"

int main()
{
    printf("main:thread:: Hello World\n");
    return 0x0;
}

void hello(int count)
{
    for (int i = 1; i <= count; i++)
    {
        printf("Current ID: 0x%x\n", i);
    }
}

int addNumbers(int a, int b)
{
    return a + b;
}