#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int num;
    cout << "number: ";
    cin >> num;
    cout << fib(num) << endl;
    return 0;
}
