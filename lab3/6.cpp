#include <iostream>

using namespace std;

int main()
{
    int r;
    cout << "r: ";
    cin >> r;
    char buffer[r][r];
    for (int x=-r; x<r; x++) {
        for (int y=-r; y<r; y++) {
            string pixel = " ";
            if (x * x + y * y < r * r)
                pixel = "*";
            cout << pixel;
        }
        cout << "\n";
    }

    return 0;
}
