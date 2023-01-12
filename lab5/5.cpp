#include <iostream>
#include "utils.h"
#include <vector>

using namespace std;

void quickSort(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    int mid = arr[n/2];

    do {
        while(arr[i] < mid)
            i++;
        while(arr[j] > mid)
            j--;

        if (i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);
    printArray1(arr, n);

    if(j > 0)
        quickSort(arr, j + 1);
    if (i < n)
        quickSort(&arr[i], n - i);
}

int main()
{
    randInit();
    int n;
    cout << "array size: "; cin >> n;

    int array[n];
    randFillArray1(array, n, 0, 100);
    printArray1(array, n); cout << endl;
    quickSort(array, n);
    cout << endl; printArray1(array, n);
    return 0;
}
