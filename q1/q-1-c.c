#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *ptr;
    char *nptr;

    ptr = (char *)malloc(50);

    if (ptr == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    memset(ptr, 'a', 50);

    nptr = (char *)realloc(ptr, 75);

    if (nptr == NULL) {
        printf("realloc failed\n");
        free(ptr);
        return 1;
    }

    printf("ptr  = %p\n", ptr);
    printf("nptr = %p\n", nptr);

    free(nptr);

    return 0;
}