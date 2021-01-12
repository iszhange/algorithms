//
// 鸡尾酒排序
// 基于冒泡排序的升级排序算法
// Created by kaiz on 2021/1/12.
//

#include <stdbool.h>

// 基础版本
void cocktail_sort(int *array, int length)
{
    int swap = 0;
    for (int i = 0; i < length / 2; ++i) {
        // 奇数轮
        bool isSorted = true;
        for (int j = i; j < length-1; ++j) {
            if (array[j] > array[j+1]) {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }

        // 偶数轮
        isSorted = true;
        for (int j = length-i-1; j > i; j--) {
            if (array[j]<array[j-1]) {
                swap = array[j];
                array[j-1] = array[j];
                array[j] = swap;
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }
}
