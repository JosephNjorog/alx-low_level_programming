#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    if (ptr == NULL) {
        return malloc(new_size);
    }

    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL) {
        return NULL;
    }

    unsigned int copy_size = (old_size < new_size) ? old_size : new_size;
    memcpy(new_ptr, ptr, copy_size);

    free(ptr);

    return new_ptr;
}

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int i;
    for (i = 0; i < 5; i++) {
        arr[i] = i;
    }

    int *new_arr = (int *)_realloc(arr, 5 * sizeof(int), 10 * sizeof(int));

    if (new_arr == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }

    free(new_arr);

    return 0;
}

