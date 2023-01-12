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
    while (!isSorted) {
        isSorted = true;
        for (int i=0; i<(n-1); i++) {
            if (array[i] <= array[i+1])
                continue;
            isSorted = false;
            int tmp = array[i];
            array[i] = array[i+1];
            array[i+1] = tmp;
            break;
        }
        printArray1(array, n);
    }
    return 0;
}
