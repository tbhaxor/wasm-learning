#ifndef APP_H
#define APP_H

#include <emscripten.h>
#include <stdio.h>
#define EXTERN extern

EMSCRIPTEN_KEEPALIVE int main();

EMSCRIPTEN_KEEPALIVE void hello(int count);
EMSCRIPTEN_KEEPALIVE int addNumbers(int a, int b);
EMSCRIPTEN_KEEPALIVE int check();

#endif