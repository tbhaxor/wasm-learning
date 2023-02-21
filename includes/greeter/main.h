#ifndef GREETER_H
#define GREETER_H

#include <emscripten.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern EMSCRIPTEN_KEEPALIVE void *greet(char *);

#endif