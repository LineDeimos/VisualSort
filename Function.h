#pragma once

void clear(char* scr, int w, int h);

void show(char* scr, int w, int h, int* arr, int arrSize);

template<typename T>
void swap(T* a, T* b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

int findIdMin(int* arr, int arrSize);