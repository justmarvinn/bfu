#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string msg;
    int offset;
    cout << "original message: "; cin >> msg;
    cout << "offset [-26; 26]: "; cin >> offset;

    cout << "encoded message: ";
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (char c : msg) {
        int i = distance(alphabet, find(alphabet, alphabet+26, c));
        int new_i = i + offset;
        if (new_i > 26)
            new_i -= 26;
        cout << alphabet[new_i];
    }
    cout << endl;
    return 0;
}
