#include <iostream>

using namespace std;

void change(int* arr)
{
    for (int i=0; i<15; i++) {
        if (arr[i] == 5)
            arr[i] = 1;
        if (arr[i] == 2)
            arr[i] = 0;
    }
}

int main()
{
    int array[15];
    for (int i=0; i<15; i++) {
        cout << "array element number " << i << ": ";
        cin >> array[i];
    }
    change(array);
    for (int i=0; i<15; i++)
        cout << array[i] << endl;
    return 0;
}
