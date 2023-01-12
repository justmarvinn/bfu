#include <iostream>

using namespace std;

bool isPrime(int n, int div=2)
{
    if (n <= 2)
        return n % 2 == 0 ? true : false;
    if (n % div == 0)
        return false;
    if (div * div > n)
        return true;
    return isPrime(n, div+1);
}

int main()
{
    int num;
    cout << "number: ";
    cin >> num;
    if (isPrime(num))
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;
    return 0;
}
