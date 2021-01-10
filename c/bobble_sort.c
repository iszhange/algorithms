//
// Created by kaiz on 2021/1/10.
//

#include "algorithms.h"
#include <stdio.h>

void bobble_sort(int *array, int length)
{
    for (int i = 0; i < length-1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (array[j] > array[j+1]) {
                int swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
    
}
