#include <iostream>
#include "utils.h"
#include <cmath>

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

    if(j > 0)
        quickSort(arr, j + 1);
    if (i < n)
        quickSort(&arr[i], n - i);
}

int binarySearch(int *arr, int n, int low, int high)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == n)
            return mid;
        if (arr[mid] < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    randInit();
    int length, n;
    cout << "array size: "; cin >> length;
    int array[length];
    randFillArray1(array, length, 0, 100);
    quickSort(array, length);
    printArray1(array, length);

    cout << endl << "number to find: "; cin >> n;
    int index = binarySearch(array, n, 0, length-1);
    if (index == -1)
        cout << "no match was found" << endl;
    else
        cout << "match: " << index << endl;
    return 0;
}
