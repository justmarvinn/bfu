#include <iostream>
#include <stack>

using namespace std;

void hanoi(int n, stack<int> from_rod, stack<int> to_rod, stack<int> aux_rod)
{
	if (n == 0)
		return;
    hanoi(n - 1, from_rod, aux_rod, to_rod);
	/* cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl; */

    :w

    stack <int> from_copy = from_rod;
    stack <int> to_copy = to_rod;
    stack <int> aux_copy = aux_rod;

    for (int i=0; i<n; i++) {
        string line = "";
        for (int j=0; j<3; j++){
            string offset((2*n+1) - (2*i+1), ' ');
            string cnt(2*i+1, '*');
            line += offset + cnt + offset + " ";
            cout << line;
        }
        cout << endl;
    }

	hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n;
    cout << "number of disks: ";
    cin >> n;

    stack <int> rod_a;
    stack <int> rod_b;
    stack <int> rod_c;

	hanoi(n, rod_a, rod_c, rod_b);
	return 0;
}

