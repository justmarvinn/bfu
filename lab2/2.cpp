#include <iostream>

using namespace std;

int main()
{
	double sum = 0;
	double a;
	do {
		cout << "input number or 0: ";
		cin >> a;
		sum += a;
	} while (a != 0);
	cout << "sum: " << sum << endl;
	return 0;
}
