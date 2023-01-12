#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int number;
    cout << "ticket number: ";
    cin >> number;

    if ((number % 1000000) / 100000 +
        (number / 10000) % 10 +
        (number / 1000) % 10
        ==
        (number / 100) % 10 +
        (number / 10) % 10 + 
        number % 10)
        cout << "lucky ticket!" << endl;
    else
        cout << "unlucky ticket(" << endl;
    return 0;
}
