#include <iostream>
#include <cmath>

using namespace std;

float findlength(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));    
}

int main()
{
    float x1, y1, x2, y2;
    cout << "x1: "; cin >> x1;
    cout << "y1: "; cin >> y1;
    cout << "x2: "; cin >> x2;
    cout << "y2: "; cin >> y2;
    cout << findlength(x1, y1, x2, y2) << endl;
    return 0;
}
