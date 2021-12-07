#include "SortAlgorithm.h"
#include "Function.h"
#include <math.h>

void bubbleSort(char* scr, int w, int h, int* arr, int arrSize) 
{
    int F = 0;
    for (int i = 0; i < arrSize - 1; i++) {
        F = 0;
        for (int j = 0; j < arrSize - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap((arr + j), (arr + j + 1));
                F = 1;
            }
            show(scr, w, h, arr, arrSize);
        }
        if (!F) {
            break;
        }
    }
}

void selectionSort(char* scr, int w, int h, int* arr, int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        int mi = i;
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[mi]) {
                mi = j;
            }
        }
        if (mi != i) {
            swap(arr + mi, arr + i);
            show(scr, w, h, arr, arrSize);
        }
    }
}

/*void quickSort(char* scr, int w, int h, int* arr, int right, int left) {
    if (abs(left - right) < 2) {
        return;
    }
}*/