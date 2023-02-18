#ifndef GREETER_H
#define GREETER_H

#include <emscripten.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

EMSCRIPTEN_KEEPALIVE char *greet(char *);

#endif