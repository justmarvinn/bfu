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

    for (int i=1; i<n; i++) {
        int x = array[i];
        int j = i;
        while (j > 0 && array[j-1]>x) {
            array[j] = array[j-1];
            j--;
        }
        array[j] = x;
        printArray1(array, n);
    }
    return 0;
}
