#include <iostream>
#include "Function.h"
#include "SortAlgorithm.h"

int width = 120;
int hieghts = 30;
char* screen = new char[width * hieghts + 1];
int mas[] = { 10, 29, 5, 7, 25, 13, 19, 30, 1, 9, 12, 28, 14, 2, 17, 11, 21, 27, 20, 3, 22, 4, 6, 24, 18, 26, 8, 15, 16, 23 };
int masSize = sizeof(mas) / sizeof(int);

int main()
{   
    screen[width * hieghts] = '\0';

    clear(screen, width, hieghts);

    show(screen, width, hieghts, mas, masSize);

    bubbleSort(screen, width, hieghts, mas, masSize);
   
    show(screen, width, hieghts, mas, masSize);

    getchar();
}