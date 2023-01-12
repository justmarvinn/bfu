#include <cstdlib>
#include "utils.h"
#include <time.h>
#include <iostream>

    void randInit()
    {
        srand(time(nullptr));
    }

    int randInt(int min, int max)
    {
        max++;
        int res = ((max - min) * ((float)rand() / RAND_MAX)) + min;
        return res;
    }

    void randFillArray1(int* arr, int length, int min=1, int max=10)
    {
        for (int i=0; i<length; i++)
            arr[i] = randInt(min, max);
    }

    void randFillArray2(int** arr, int width, int height, int min=1, int max=10)
    {
        for (int i=0; i<width; i++)
            for (int j=0; j<height; j++)
                arr[i][j] = randInt(min, max);
    }

    void printArray1(int* arr, int length)
    {
        for (int i=0; i<length; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
