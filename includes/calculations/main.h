#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE int add_z(int, int);
EMSCRIPTEN_KEEPALIVE int div_z(int, int);
EMSCRIPTEN_KEEPALIVE int mul_z(int, int);
EMSCRIPTEN_KEEPALIVE int sub_z(int, int);

EMSCRIPTEN_KEEPALIVE double add_r(double, double);
EMSCRIPTEN_KEEPALIVE double div_r(double, double);
EMSCRIPTEN_KEEPALIVE double mul_r(double, double);
EMSCRIPTEN_KEEPALIVE double sub_r(double, double);

#endif