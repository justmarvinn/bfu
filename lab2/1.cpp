#include <iostream>

using namespace std;

int fact(int n)
{
	if (n == 1 or n == 0) return 1;
	else if (n == 2) return 2;
	else return n * fact(n-1);
}

int main()
{
	int a;
	do {
		cout << "number bigger than 0: ";
		cin >> a;
		if (a < 0) cout << "bruh\n";
	} while (a < 0);
	cout << fact(a) << endl;
	return 0;
}
