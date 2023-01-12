#include <iostream>

using namespace std;

float findmax(float a, float b)
{
    return a * (a >= b) + b * (a < b);
}

float findmax(float a, float b, float c)
{
    float tmp = a * (a >= b) + b * (a < b);
    return c * (c >= tmp) + c * (c < tmp);
}

int main()
{
    int n;
    do {
        cout << "operand number (2 or 3): ";
        cin >> n;
    } while (!(n == 2 || n == 3));
    if (n == 2){
        float a, b;
        cout << "first number: "; cin >> a;
        cout << "second number: "; cin >> b;
        cout << findmax(a, b) << endl;
    } else {
        float a, b, c;
        cout << "first number: "; cin >> a;
        cout << "second number: "; cin >> b;
        cout << "third number: "; cin >> c;
        cout << findmax(a, b, c) << endl;
    }
    return 0;
}
