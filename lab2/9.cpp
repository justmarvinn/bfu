#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	double d = b*b - 4*a*c;
	double x1 = (-b - sqrt(d)) / (2*a);
	double x2 = (-b + sqrt(d)) / (2*a);
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;
	return 0;
}
