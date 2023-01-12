#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2, length;
	cout << "x1: "; cin >> x1;
	cout << "y1: "; cin >> y1;
	cout << "x2: "; cin >> x2;
	cout << "y2: "; cin >> y2;
	length = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	cout << "length: " << length << endl;
	return 0;
}
