//
// 冒泡排序
// Created by kaiz on 2021/1/10.
//

#include <stdbool.h>

// 基础版
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

// 优化版
void bobble_sort2(int *array, int length)
{
    for (int i = 0; i < length-1; ++i) {
        bool isSorted = true;
        for (int j = 0; j < length - i - 1; ++j) {
            if (array[j] > array[j+1]) {
                int swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
                isSorted = false;
            }
        }

        if (isSorted) {
            break;
        }
    }
}

// 强化版
void bobble_sort3(int *array, int length)
{
    int sortBorder = length - 1;
    for (int i = 0; i < length-1; ++i) {
        bool isSorted = true;
        int sortBorderTmp = 0;
        for (int j = 0; j < sortBorder; ++j) {
            if (array[j] > array[j+1]) {
                int swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
                isSorted = false;
                sortBorderTmp = j;
            }
        }
        sortBorder = sortBorderTmp;

        if (isSorted) {
            break;
        }
    }
}