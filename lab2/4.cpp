#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string res = "";
	cout << "n: ";
	cin >> n;
	while (n > 0) {
		res = to_string(n % 2) + res;
		n /= 2;
	}
	cout << res << endl;
	return 0;
}
