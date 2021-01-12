//
// Created by kaiz on 2021/1/10.
//

#include <stdio.h>
#include "algorithms.h"

void array_print(int array[], int length);


void main()
{
    int arr[] = {9,2,24,5,2,66,33,4,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    array_print(arr, length);
    cocktail_sort(arr, length);
    array_print(arr, length);

}


void array_print(int array[], int length)
{
    for (int i = 0; i < length; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}