#include <iostream>
#include "utils.h"

using namespace std;

int main()
{
    randInit();
    int n;
    cout << "array size: ";
    cin >> n;

    int array[n];
    randFillArray1(array, n, 1, 100);
    printArray1(array, n);
    cout << endl;

    bool isSorted = false;
    int offset = 0;
    while (!isSorted) {
        int min = 101;
        int min_pos = n+1;
        isSorted = true;
        for (int i=offset; i<n; i++) {
            if (array[i] < min) {
                isSorted = false;
                min = array[i];
                min_pos = i;
            }
        }
        if (!isSorted) {
            int tmp = array[offset];
            array[offset] = array[min_pos];
            array[min_pos] = tmp;
        }
        offset++;
        printArray1(array, n);
    }
    return 0;
}
