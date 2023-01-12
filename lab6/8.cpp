#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "input string: "; cin >> str;

    int index = str.find("password:");
    if (index == string::npos)
        cout << "no password found" << endl;
    else {
        str.replace(index+9, 8, "********");
        cout << str << endl;
    }
    return 0;
}
