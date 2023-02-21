#include <calculations/main.h>

double add_r(double x, double y) { return x + y; }

double mul_r(double x, double y) { return x * y; }

double div_r(double x, double y) {
    if (x == 0 || y == 0) return 0;
    return x / y;
}

double sub_r(double x, double y) { return x - y; }
