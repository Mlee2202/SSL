#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    // Opcional: mostrar estándar de C
    #ifdef __STDC_VERSION__
        printf("C version: %ld\n", __STDC_VERSION__);
    #endif

    return 0;
}
