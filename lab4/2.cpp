#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "array size: ";
    cin >> n;
    int array[n], another_array[n];
    for (int i=0; i<n; i++) {
        cout << "array element number " << i << ": ";
        cin >> array[i];
        i % 2 == 0 ? another_array[i] = array[i] * 2 : another_array[i] = array[i] * 3;
    }
    for (int i=0; i<n; i++)
        cout << another_array[i] << endl;

    return 0;
}
