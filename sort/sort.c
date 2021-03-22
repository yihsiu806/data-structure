#include "utils.h"

void bubble_sort(int array[], int size)
{
    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j+1]) {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

#define ARRAY_SIZE 10
int main(void)
{
    int array[ARRAY_SIZE] = {0};

    generate_random_number(array, ARRAY_SIZE);

    print_array(array, ARRAY_SIZE, "Before sort...");

    bubble_sort(array, ARRAY_SIZE);

    print_array(array, ARRAY_SIZE, "After sort...");

    validate_sort(array, ARRAY_SIZE);

    return 0;
}