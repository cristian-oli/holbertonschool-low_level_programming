#ifndef _SEARCH_ALGOS
#define _SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int l, int r);

#endif
