#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *ptr;

    ptr = (char *)malloc(50);

    if (ptr == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    memset(ptr, 'a', 50);

    for (int i = 0; i < 10; i++) {
        printf("%c ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}