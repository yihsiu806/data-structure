#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

void generate_random_number(int *array, int size);
void print_array(int *array, int size, const char *fmt);
void validate_sort(int array[], int size);

#endif