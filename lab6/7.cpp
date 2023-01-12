#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, sub;
    cout << "input string: "; cin >> str;
    cout << "input substring: "; cin >> sub;

    int c = 0;
    for (int i=0; i<str.length(); i++)
        if (str.substr(i, sub.length()) == sub)
            c++;
    cout << c << endl;
    return 0;
}
