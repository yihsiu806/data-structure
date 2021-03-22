#include "utils.h"

void generate_random_number(int *array, int size)
{
    struct timespec tp = {0};
    int i = 0;
    int lower = 1;
    int upper = 10;

    clock_gettime(CLOCK_MONOTONIC, &tp);

    srand(tp.tv_nsec);

    for (i = 0; i < size; i++) {
        array[i] = rand() % (upper - lower + 1) + lower;
    }
}

void print_array(int *array, int size, const char *fmt)
{
    printf("%s\n", fmt);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}


void validate_sort(int array[], int size)
{
    for (int i = 0; i < size-1; i++) {
        if (array[i] > array[i+1]) {
            printf("Wrong!\n");
            return;
        }
    }
    printf("Correct!\n");
}