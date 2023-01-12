#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "n: ";
	cin >> n;
	bool res = true;
	for (int i=2; i<=ceil(sqrt(n)); i++) {
		if (n % i == 0) {
			res = false;
			break;
		}
	}
	if (res) cout << "prime" << endl;
	else cout << "not prime" << endl;
	return 0;
}
