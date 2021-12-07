#include "Function.h"
#include <Windows.h>
#include <iostream>

void clear(char* scr, int w, int h)
{
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            scr[i + j * w] = ' ';
        }
    }
}

void show(char* scr, int w, int h, int* arr, int arrSize)
{
    clear(scr, w, h);

    for (int i = 0; i < arrSize; i++) {
        for (int j = 1; j <= arr[i]; j++) {
            scr[w * (30 - j) + i] = '@';
        }
    }

    printf(scr);
    Sleep(100);
}

int findIdMin(int* arr, int arrSize) {
    int mi = arr[0];
    int miId = 0;
    for (int i = 0; i < arrSize; i++) 
    {
        if (arr[i] < mi) {
            mi = arr[i];
        }
    }
    return miId;
}