#include <iostream>
#include "utils.h"

using namespace std;

bool isSorted(int *arr, int n)
{
    bool res = true;
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            res = false;
    return res;
}

void bogosort(int *arr, int n)
{
    while (!isSorted(arr, n)) {
        for (int i=0; i<n; i++) {
            int ind = rand() % n;
            swap(arr[i], arr[ind]);
        }
        printArray1(arr, n);
    }
}

int main()
{
    randInit();
    int n;
    cout << "array size: "; cin >> n;

    int array[n];
    randFillArray1(array, n, 0, 100);
    printArray1(array, n);
    bogosort(array, n);

    return 0;
}
