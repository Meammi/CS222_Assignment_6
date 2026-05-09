#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char *ptr;

    // Allocate 50 bytes and initialize to 0
    ptr = (unsigned char *)calloc(50, sizeof(unsigned char));

    if (ptr == NULL) {
        printf("calloc failed\n");
        return 1;
    }

    // Check every byte
    for (int i = 0; i < 50; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}