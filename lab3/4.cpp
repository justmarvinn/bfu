#include <iostream>
#include <cmath>

using namespace std;

void solve(float &x1, float &x2, float a, float b, float c)
{
    float d = b*b - 4*a*c;
    x1 = (-b - sqrt(d)) / (2*a);
    x2 = (-b + sqrt(d)) / (2*a);
}

int main()
{
    float x1, x2, a, b, c;
    do {
        cout << "a: "; cin >> a;
    } while (a == 0);
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    solve(x1, x2, a, b, c);
    cout << x1 << ", " << x2 << endl;
    return 0;
}
