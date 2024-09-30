#include <stdio.h>
#include <stdlib.h>

/**
This code updates the value in the heap
to 10 before giving the address to main
**/

int foo(int **ptr) {
    int value = 10;
    int *temp;
    temp = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }

    *ptr = temp;
    **ptr = 10;
    printf("at end of foo: %d\n", **ptr);
    return 0;
}

int main() {
    int *ptr = NULL;
    if (0 != foo(&ptr)) {
        return -1;
    }

    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
        free(ptr);
    }

    return 0;
}
