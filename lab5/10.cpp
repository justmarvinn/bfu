#include <iostream>
#include "utils.h"
#include <chrono>

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

int directSearch(int *arr, int size, int n)
{
    int res = -1;
    for (int i=0; i<size; i++)
        if (arr[i] == n) {
            res = i;
            break;
        }
    return res;
}

int main()
{
    randInit();
    int data[10000];
    randFillArray1(data, 10000, 0, RAND_MAX-1);
    quickSort(data, 10000);

    auto start_direct = chrono::high_resolution_clock::now();
    for (int i=0; i<10000; i++) {
        int index = rand() % 10000;
        directSearch(data, 10000, data[index]);
    }
    auto end_direct = chrono::high_resolution_clock::now();
    cout << "10000 direct searches took " << chrono::duration_cast<chrono::milliseconds>(end_direct-start_direct).count() << " ms" << endl;

    auto start_binary = chrono::high_resolution_clock::now();
    for (int i=0; i<10000; i++) {
        int index = rand() % 10000;
        binarySearch(data, data[index], 0, 9999);
    }
    auto end_binary = chrono::high_resolution_clock::now();
    cout << "10000 binary searches took " << chrono::duration_cast<chrono::milliseconds>(end_binary-start_binary).count() << " ms" << endl;

    return 0;
}
