#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr;
    
    ptr = (char *)malloc(10);

    if (ptr == NULL) {
        return 1;
    }

    ptr[0] = 'B';

    free(ptr);

    printf("%c\n", ptr[0]);

    return 0;
}