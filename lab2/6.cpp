#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int  n;
	do {
		cout << "ширина основания песочных часов: ";
		cin >> n;
		if (n <= 2) cout << "ширина должна быть больше 2" << endl;
	} while (n <= 2);
	for (int i=n; i >= ((n % 2 == 0) ? 2 : 1); i-=2) {
		string offset((n-i) / 2, ' ');
		string line(i, '*');
		cout << (offset + line) << endl;
	}
	for (int i=((n % 2 == 0) ? 4 : 3); i<=n; i+=2) {
		string offset((n-i) / 2, ' ');
		string line(i, '*');
		cout << (offset + line) << endl;
	}
	return 0;
}
