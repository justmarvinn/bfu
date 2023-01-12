#include <iostream>

using namespace std;

int main()
{
	int n;
	int fib[] = {1, 1, 0};
	do {
		cout << "n: ";
		cin >> n;
		if (n <= 0) cout << "stupid?";
	} while (n <= 0);
	if (n == 1 || n == 2) cout << 1 << endl;
	else { 
		for (int i=3; i<=n; i++) {
			fib[2] = fib[0] + fib[1];
			fib[0] = fib[1];
			fib[1] = fib[2];
		}
		cout << fib[2] << endl;
	}
	return 0;
}
