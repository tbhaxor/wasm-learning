#include <greeter/main.h>

void *greet(char *name) {
    char *buffer = (char *)malloc(50);
    memset((void *)buffer, 0x0, 50);

    printf("strlen(name) = %lu\n", strlen(name));
    if (strlen(name) > 20) {
        snprintf(buffer, 50, "hello world!");
    } else {
        snprintf(buffer, 50, "hello %s!", name);
    }

    return (void *)buffer;
}
