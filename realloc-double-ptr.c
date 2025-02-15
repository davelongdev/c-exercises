/*
 * this is just an example of using realloc with a double pointer
 * it doesn't do anthing besides not crashing and not printing "uh oh"
*/
#include <stdio.h>
#include <stdlib.h>

typedef enum {
    STATUS_GOOD,
    STATUS_BAD,
} status_t;

status_t reallocate(int **data, int len) {
    int *temp = NULL;
    temp = realloc(*data, len);

    if(temp = NULL) {
        *data = temp;
        return STATUS_BAD;
    }

    *data = temp;
    return STATUS_GOOD;
}

int main() {
    int *first = malloc(64);
    if (STATUS_BAD == reallocate(&first, 128)) {
        printf("uh oh\n");
    }

    return 0;
}
