#include <iostream>

using namespace std;

float CelsFarh(char origin, float val)
{
    if (origin == 'c')
        return val * 1.8f + 32;
    return (val - 32) / 1.8f;
}

float CelsKelv(char origin, float val)
{
    if (origin == 'c')
        return val + 273.15f;
    return val - 273.15f;
}

int main()
{
    int mode;
    do {
        cout << "1 - Celsius / Fahrenheit\n2 - Celsius / Kelvin\n>>> ";
        cin >> mode;
        if (!(mode == 1 || mode == 2))
            cout << "bruh" << endl;
    } while (!(mode == 1 || mode == 2));
    if (mode == 1) {
        char c;
        float val;
        do {
            cout << "type 'c' or 'f': ";
            cin >> c;
        } while (!(c == 'c' || c == 'f'));
        cout << "value: ";
        cin >> val;
        cout << CelsFarh(c, val) << endl;
    } else {
        char c;
        float val;
        do {
            cout << "type 'c' or 'k': ";
            cin >> c;
        } while (!(c == 'c' || c == 'k'));
        cout << "value: ";
        cin >> val;
        cout << CelsKelv(c, val) << endl;
    }
    return 0;
}
